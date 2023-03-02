#include "main.h"
/**
* _strcmp - Compares two strings
* @st1: input
* @st2: input
* Return: dest
*/
int _strcmp(char *st1, char *st2)
{
int i = 0;

while (st1[i] != '\0' && st2[i] != '\0')
{
if (st1[i] != st2[i])
{
return (st1[i] - st2[i]);
}
i++;
}
return (0);
}
