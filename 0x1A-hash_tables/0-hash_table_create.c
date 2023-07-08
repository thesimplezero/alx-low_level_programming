#include "hash_tables.h"

/**
* hash_table_create - Makes a new hash table.
* @size: The array size.
*
* Return: Pointer to the newly formed hash table.
*/
/*
* 1. Allocate memory for the hash table structure.
* 2. Allocate memory for the node pointer array.
* 3. Initialize the array with null pointers.
* 4. Return the hash table pointer.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table;
unsigned long int i;

/* Allocate memory for hash table */
hash_table = malloc(sizeof(hash_table_t));
if (!hash_table)
return (NULL);

hash_table->size = size;

/* Allocate memory for array of node pointers */
hash_table->array = malloc(size * sizeof(hash_node_t *));
if (!hash_table->array)
{
free(hash_table);
return (NULL);
}

/* Initialize array with NULL */
for (i = 0; i < size; ++i)
hash_table->array[i] = NULL;

return (hash_table);
}
