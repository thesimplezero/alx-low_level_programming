#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* Description: This function tests the custom _strchr() function
* to search for a character in a string.
*
* Return: Always 0.
*/
int main(void)
{
char *s = "hello";
char *f;

f = _strchr(s, 'l');

if (f != NULL)
{
printf("%s\n", f);
}
return (0);
}
