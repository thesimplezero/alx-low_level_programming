#include <stdlib.h>

/**
* _memset - fills memory with a constant byte
*
* @s: input pointer that represents memory
*     block to fill
* @b: characters to fill
* @n: number of bytes to be filled
*
* Return: A pointer to the filled memory area
*/
void *_memset(void *s, int b, size_t n)
{
unsigned char *p = s;
while (n--)
*p++ = (unsigned char) b;
return s;
}

/**
* _calloc - allocates memory for an array of nmemb elements
* of size bytes each and returns a pointer to the allocated memory.
*
* The memory is set to zero.
*
* @nmemb: number of elements
* @size: size in bytes of each element
*
* Return: pointer to the allocated memory or NULL if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *new_mem = NULL;

if (nmemb == 0 || size == 0)
return NULL;

new_mem = malloc(nmemb * size);
if (new_mem == NULL)
return NULL;

_memset(new_mem, 0, nmemb * size);

return new_mem;
}
