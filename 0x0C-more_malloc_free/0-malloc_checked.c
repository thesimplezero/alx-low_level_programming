#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
*
* @b: amount of bytes
*
* Return: pointer to our new allocated memory or NULL if malloc fails
*/
void *malloc_checked(unsigned int b)
{
void *new_mem;

new_mem = malloc(b);
if (new_mem == NULL)
{
return (NULL);
}
return (new_mem);
}
