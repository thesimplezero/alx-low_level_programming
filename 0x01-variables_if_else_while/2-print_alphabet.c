#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}