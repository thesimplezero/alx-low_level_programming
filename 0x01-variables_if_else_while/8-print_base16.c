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
	int numberz = 48; /*48; decimal rep of 0*/

	while (numberz <= 102) /*102; decimal rep of f*/
	{
		putchar(numberz);

		/* after 9 we jump till 96; `*/
		if (numberz == 57)
			numberz += 39;

		++numberz;
	}
	putchar('\n');

	return (0);
}
