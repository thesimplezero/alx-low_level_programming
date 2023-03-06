#include "main.h"

/**
* _strspn - get length of a prefix substring
* @s: pointer to string input
* @accept: substring prefix to look for
*
* Description: This function computes the length of the maximum initial
* segment of the string s which consists entirely of bytes from the
* substring accept. If no bytes from accept are found in s, the function
* returns zero.
*
* Return: the number of bytes in the initial segment of s consisting only
* of bytes from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
int i, j, flag;

i = 0;
while (s[i] != '\0')
{
j = 0;
flag = 1;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
flag = 0;
break;
}
j++;
}
if (flag == 1)
{
break;
}
i++;
}

return (i);
}
