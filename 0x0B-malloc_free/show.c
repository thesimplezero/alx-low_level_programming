#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* show_alloc_mem - prints a list of memory blocks allocated using malloc
*/
void show_alloc_mem(void)
{
printf("break: %p\n", sbrk(0));
}

/**
* create_array - creates an array of chars, and initializes it with a specific char.
* @size: size of the array
* @c: char to initialize the array with
*
* Return: pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

if (size == 0)
return (NULL);

ptr = malloc(size * sizeof(char));
if (ptr == NULL)
return (NULL);

for (i = 0; i < size; i++)
ptr[i] = c;

return (ptr);
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
* show_alloc_mem - prints a summary of the current memory allocation
*/
void show_alloc_mem(void)
{
printf("break: %d\n", sbrk(0));
}
