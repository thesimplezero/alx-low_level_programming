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
	char teb = 'z';

	while (teb >= 'a')
		putchar(teb--);

	putchar('\n');

	return (0);
}
