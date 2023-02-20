#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char reverse = 'z';

	while (reverse >= 'a')
		putchar(reverse--);

	putchar('\n');

	return (0);
}
