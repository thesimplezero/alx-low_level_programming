#include <stdio.h>

/**
 * print_name - function to print name
 *
 * @name: name to print
 * @f: function pointer that doesn't return anything
 *
 * Return: Always void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
