#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Description: A program that prints the opcodes
*              of its own main function.
*              Usage: ./main number_of_bytes
*
* @argc: argument counter
* @argv: argument vector
*
* Return: Always Successful
*/

int main(int argc, char *argv[])
{
int index, nbytes;
unsigned char *ptr = (unsigned char *) main;

if (argc != 2)
{
printf("Error\n");
return (1);
}

nbytes = atoi(argv[1]);
if (nbytes <= 0)
{
printf("Error\n");
return (2);
}

for (index = 0; index < nbytes - 1; index++)
printf("%02x ", ptr[index]);

printf("%02x\n", ptr[index]);

return (0);
}
