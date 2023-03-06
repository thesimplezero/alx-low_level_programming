#include "main.h"

/**
* _strpbrk - search for any of a set of bytes in a string.
* @s: pointer to input string
* @accept: pointer to string we are searching for in @s
*
* Description: This function searches for the first occurrence of any character
* in the string accept in the string s.
*
* Return: pointer to the first occurrence of any of the bytes in accept in s,
* or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
int i, j;

i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
return (s + i);
}
j++;
}
i++;
}

return ('\0');
}
