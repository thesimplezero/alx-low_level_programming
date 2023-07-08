#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table.
* @ht: A pointer to a hash table.
*
* Description: It iterates over array, deletes each node in linked list,
* frees the array, and then frees the hash table.
*/
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *tmp;
unsigned long int i;

if (!ht)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node)
{
tmp = node->next;
free(node->key);
free(node->value);
free(node);
node = tmp;
}
}
free(ht->array);
free(ht);
}
