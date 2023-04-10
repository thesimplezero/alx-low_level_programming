#include "main.h"

/**
* _lngth - Find the length of @n
*
* @n: Value to find its length
*
* Return: lngth
*/
int _lngth(unsigned long int n)
{
int lngth = 0;

while (n > 0)
{
lngth++;
n >>= 1; /* Shift n to the right by 1 */
}

return (lngth - 1);
}

/**
* print_binary - A function that converts a decimal to binary
*
* @n: Decimal number to convert
*
* Return: Nothing
*/
void print_binary(unsigned long int n)
{
int lngth;
unsigned long int mask = 1;

lngth = _lngth(n);

if (lngth > 0) /* Create mask based on the length of number */
mask <<= lngth; /* Shift mask to the left by length */

while (mask > 0)
{
if (n & mask) /* If n & mask == 1 print 1 */
_putchar('1');
else /* Else if n & mask == 0 print 0 */
_putchar('0');

mask >>= 1; /* Shift mask to the right by 1 */
}
}
