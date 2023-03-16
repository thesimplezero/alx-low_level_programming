#include <stdlib.h>
#include <stdio.h>

/**
* _realloc - reallocate a memory block using malloc and free
* @ptr: pointer to the memory previously allocated
* @old_size: the size, in bytes, of the allocated space for ptr
* @new_size: the new size, in bytes, of the new memory block
*
* Return: pointer to the new allocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int i;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
ptr = malloc(new_size);
if (ptr == NULL)
return (NULL);
return (ptr);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

for (i = 0; i < old_size && i < new_size; i++)
new_ptr[i] = ((char *)ptr)[i];

free(ptr);

return (new_ptr);
}

/**
* simple_print_buffer - prints buffer in hexa
* @buffer: the address of memory to print
* @size: the size of the memory to print
*
* Return: Nothing.
*/
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;

i = 0;
while (i < size)
{
if (i % 10)
printf(" ");
if (!(i % 10) && i)
printf("\n");
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}

/**
* main - check the code for
*
* Return: Always 0.
*/
int main(void)
{
char *p;
unsigned int i;

p = malloc(sizeof(char) * 10);
p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
i = 0;
while (i < 98)
{
p[i++] = 98;
}
simple_print_buffer(p, 98);
free(p);
return (0);
}
