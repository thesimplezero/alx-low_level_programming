#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numberz = 0;

	while (numberz < 10)
	{
		putchar(numberz % 10 + 48);
		numberz++;
	}
	putchar('\n');

	return (0);
}
