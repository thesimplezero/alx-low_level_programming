#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of the program
*
* Description: A program that prints the opcodes of its own main function.
*              Usage: ./main number_of_bytes
*
* @argc: The number of command-line arguments
* @argv: An array of pointers to the arguments
*
* Return: Always successful
*/
int main(int argc, char *argv[])
{
int index;
int nbytes;
char *ptr = (char *)main;

/* Check for the correct number of arguments */
if (argc != 2)
{
fprintf(stderr, "Usage: %s number_of_bytes\n", argv[0]);
return (1);
}

/* Convert argument to integer */
nbytes = atoi(argv[1]);

/* Check for negative bytes */
if (nbytes < 0)
{
fprintf(stderr, "Error\n");
return (2);
}

/* Print opcodes */
for (index = 0; index < nbytes; index++)
{
printf("%02x", ptr[index] & 0xFF);
if (index != nbytes - 1)
printf(" ");
}
printf("\n");
return (0);
}
