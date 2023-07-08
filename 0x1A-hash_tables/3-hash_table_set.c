#include "hash_tables.h"

/**
* hash_table_set - Adds or updates an element in the hash table.
* @ht: A pointer to the hash table.
* @key: The key to add. Key cannot be an empty string.
* @value: The value associated with the key.
*
* Return: 0 if failure, otherwise 1.
*
* Description: If collision occurs, add the new node at the beginning.
*/

/*
* 1. Return 0 if hash table, key, or value is NULL.
* 2. If key already exists, update its value and return 1.
* 3. If key doesn't exist, create a new node and add it to the hash table.
* 4. Return 1.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *node, *new_node;
char *value_copy;

if (!ht || !key || !*key || !value)
return (0);

value_copy = strdup(value);
if (!value_copy)
return (0);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

while (node)
{
if (!strcmp(node->key, key))
{
free(node->value);
node->value = value_copy;
return (1);
}
node = node->next;
}
new_node = malloc(sizeof(hash_node_t));
if (!new_node)
{
free(value_copy);
return (0);
}
new_node->key = strdup(key);
if (!new_node->key)
{
free(new_node);
return (0);
}
new_node->value = value_copy;
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
