#include "hash_tables.h"

/**
* hash_djb2 - Applies the djb2 hash algorithm on a string.
* @str: The string to hash.
*
* Return: The resulting hash.
*/

/*
* 1. Function accepts a string and returns an unsigned long int.
* 2. Initiates hash with a value of 5381.
* 3. Iterates over the string, updating the hash for each character.
* 4. Hash calculation: old hash value multiplied by 33, plus current character.
* 5. Returns final hash value.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash = 5381;
int c;

while ((c = *str++))
hash = ((hash << 5) + hash)+c;

return (hash);
}
