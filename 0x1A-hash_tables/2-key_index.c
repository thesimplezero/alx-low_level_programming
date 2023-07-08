#include "hash_tables.h"

/**
* key_index - Fetches the index for key/value storage in hash table array.
* @key: The key to process.
* @size: The size of the hash table array.
*
* Return: The index of the key.
*
* Description: Employs the djb2 algorithm.
*/

/*
* 1. Accepts a key and size as input.
* 2. Applies the hash_djb2 function to acquire the hash of the key.
* 3. Utilizes the modulo operator to derive the key index.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
