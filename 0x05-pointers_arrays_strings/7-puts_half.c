#include "main.h"

/**
* puts_half - prints half of a string
*
* @str: string parameter input
*
* Return: nothing
*/
void puts_half(char *str)
{
int len = 0, i;

while (*(str + len))
len++;

for (i = (len + 1) / 2; i < len; i++)
_putchar(*(str + i));

_putchar('\n');
}
