#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int numzo = 48; /*48; decimal rep of 0*/

	while (numzo <= 102) /*102; decimal rep of f*/
	{
		putchar(numzo);

		/* after 9 we jump till 96; `*/
		if (numzo == 57)
			numzo += 39;

		++numzo;
	}
	putchar('\n');

	return (0);
}
