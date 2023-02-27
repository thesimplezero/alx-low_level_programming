#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char ch;

	/* Find the length of the string without null character */
	while (*(s + len) != '\0')
	{
		len++;
	}

	/* Swap the string by looping to half the string */
	for (i = 0; i < len / 2; ++i)
	{
		ch = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = ch;
	}
}
