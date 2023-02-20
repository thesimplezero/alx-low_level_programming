#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char chi = 'a';

	while (chi <= 'z')
	{
		if (chi == 'e' || chi == 'q')
			++chi;
		putchar(chi);
		++chi;
	}
	putchar('\n');

	return (0);
}
