#include <stdio.h>

/**
 * main - program that prints the number of arguments passed to it
 *
 * @argc: The number of arguments passed
 * @argv: An array containing the program command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])

{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}