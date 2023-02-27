#include "main.h"

/**
 * _puts - prints a string followed by a newline to stdout
 *
 * @str: pointer to the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	char *s = str;

	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
