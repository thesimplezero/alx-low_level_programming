#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: the size of the square to print
 *
 * Return: void
 */

void print_square(int size)
{
	int row, col;

	for (row = 1; row <= size; ++row)
	{
		for (col = 1; col <= size; ++col)
			_putchar('#');
		_putchar('\n');
	}
}
