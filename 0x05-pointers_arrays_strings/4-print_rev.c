#include "main.h"
/**
 * print_rev - prints a string in reverse order
 *
 * @s: pointer to the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int index;

	/*finds the length of string without null character*/
	while (s[length] != '\0')
		length++;

	/*print char from the last index as you decrement*/
	for (index = length - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
