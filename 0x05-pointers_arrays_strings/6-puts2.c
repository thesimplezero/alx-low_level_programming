#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting from the first
 *
 * @str: The string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
