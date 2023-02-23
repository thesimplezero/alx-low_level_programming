#include"main.h"

/**
* print_square - prints a square using '#' characters of size "size"
* @size: size of the square to be printed
*/

void print_square(int size)
{
int row, column;

for (row = 1; row <= size; ++row)
{
for (column = 1; column <= size; ++column)
_putchar('#');
_putchar('\n');
}
}
