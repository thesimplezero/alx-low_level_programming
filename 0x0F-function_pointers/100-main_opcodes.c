#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the opcodes of its own main function
* @argc: the number of command-line arguments
* @argv: an array of pointers to the arguments
*
* Return: 0 if successful, 1 if wrong number of arguments, 2 if negative bytes
*/
int main(int argc, char *argv[])
{
int nbytes, i;
unsigned char *opcodes;

/* check number of arguments */
if (argc != 2)
{
printf("Error\n");
return (1);
}

/* convert argument to integer */
nbytes = atoi(argv[1]);

/* check for negative bytes */
if (nbytes < 0)
{
printf("Error\n");
return (2);
}

/* cast main function to unsigned char pointer */
opcodes = (unsigned char *)main;

/* print opcodes */
for (i = 0; i < nbytes; i++)
printf("%02x ", *(opcodes + i));
printf("\n");

return (0);
}
