#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: First number.
 * @n2: Second number.
 * @r: Buffer to store the result.
 * @size_r: Size of buffer.
 *
 * Return: Pointer to buffer or 0 if buffer is too small.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, op, bg, dr1, dr2, add = 0;

	while (*(n1 + c1) != '\0')
		c1++;
	while (*(n2 + c2) != '\0')
		c2++;

	bg = c1 >= c2 ? c1 : c2;

	if (size_r <= bg + 1)
		return (0);

	r[bg + 1] = '\0';

	c1--, c2--, size_r--;
	dr1 = *(n1 + c1) - '0', dr2 = *(n2 + c2) - '0';

	while (bg >= 0)
	{
		op = dr1 + dr2 + add;

		add = op >= 10 ? op / 10 : 0;

		if (op > 0)
			*(r + bg) = (op % 10) + '0';
		else
			*(r + bg) = '0';

		if (c1 > 0)
			c1--, dr1 = *(n1 + c1) - '0';
		else
			dr1 = 0;

		if (c2 > 0)
			c2--, dr2 = *(n2 + c2) - '0';
		else
			dr2 = 0;

		bg--, size_r--;
	}

	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
