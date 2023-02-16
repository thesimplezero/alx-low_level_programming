#include <stdio.h>

/**
 * main - Prints the size of various types
 *
 * Return: Always 0
 */
int main(void)
{
	/* Size of a char */
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	/* Size of an int */
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	/* Size of a long int */
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	/* Size of a long long int */
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	/* Size of a float */
	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);
}

