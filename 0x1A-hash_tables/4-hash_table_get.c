#include "hash_tables.h"

/**
* hash_table_get - Retrieves the value associated with a key in a hash table.
* @ht: A pointer to the hash table.
* @key: The key to retrieve the value of.
*
* Return: NULL if key cannot be found, else the value associated with the key.
*
* Description: This function uses the djb2 algorithm to find the
* index of the key
*/

/*
* 1. Return NULL if hash table or key is NULL or if key is an empty string.
* 2. Get the index of the key.
* 3. If index is greater than or equal to size of array, return NULL.
* 4. Initialize node pointer to index in array.
* 5. Iterate until node is NULL or key matches the key of node, if not,
* move to next node.
* 6. Return value of node or NULL if node is NULL.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index;

if (!ht || !key || !*key)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

while (node)
{
if (!strcmp(node->key, key))
return (node->value);
node = node->next;
}

return (NULL);
}
