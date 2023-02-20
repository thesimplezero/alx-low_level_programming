#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	/*prints a - z*/
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		++lowercase;
	}

	/*print A - Z*/
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		++uppercase;
	}
	putchar('\n');

	return (0);
}
