#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int
* @b: String containing 0 and 1 characters
*
* Return: The converted number, or 0 if @b contains an invalid character
*         or is null
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int nmbr;
unsigned int result = 0;

if (b == NULL)
{
return (0);
}

for (nmbr = 0; b[nmbr] != '\0'; nmbr++)
{
if (b[nmbr] != '0' && b[nmbr] != '1')
{
return (0);
}

result <<= 1;
if (b[nmbr] == '1')
{
result += 1;
}
}

return (result);
}
