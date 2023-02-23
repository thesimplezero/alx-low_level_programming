#include"main.h"

/**
* print_line - prints a line of n underscores
* @n: number of underscores to print
*
* Return: void
*/

void print_line(int n)
{
int lnChr;

if (n <= 0)
_putchar('\n');
else
{
for (lnChr = 1; lnChr <= n; ++lnChr)
_putchar('_');
_putchar('\n');
}
}
