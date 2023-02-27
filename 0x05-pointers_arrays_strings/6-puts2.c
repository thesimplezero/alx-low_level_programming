#include "main.h"

/**
 * print_even_chars - prints every even character of a string
 *
 * @str: string to print even characters from
 *
 * Return: nothing
 */
void print_even_chars(char *str)
{
        int i;

        for (i = 0; str[i] != '\0'; ++i)
        {
                if (i % 2 == 0)
                        _putchar(str[i]);
        }
        _putchar('\n');
}
