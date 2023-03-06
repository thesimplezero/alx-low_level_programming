#include "main.h"

/**
* _strchr - locate character in a string
* @s: pointer to the input string
* @c: character to locate
*
* Description: This function locates the first occurrence of the character c
* in the string s. If the character is not found, it returns a NULL pointer.
*
* Return: a pointer to the first occurrence of c in s, or NULL if not found
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

if (*s == c)
{
return (s);
}
else
{
return ('\0');
}
}
