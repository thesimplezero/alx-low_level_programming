#include "main.h"

/**
* print_binary - prints the binary representation of @num
*
* @num: decimal value
*
* Return: nothing
*/
void print_binary(unsigned long int num)
{
int bit_pstn;
unsigned long int mask;

for (bit_pstn = sizeof(unsigned long int) * 8 - 1; bit_pstn >= 0; bit_pstn--)
{
mask = (1UL << bit_pstn);
if (num & mask)
break;
}

for (; bit_pstn >= 0; bit_pstn--)
{
mask = (1UL << bit_pstn);
_putchar((num & mask) ? '1' : '0');
}
}

/**
* clear_bit - sets the value of a bit to 0 at a given index.
*
* @num_ptr: pointer to the number
* @index: index to set the value of bit to 0
*
* Return: 1 if it worked OR -1 if it failed
*/
int clear_bit(unsigned long int *num_ptr, unsigned int index)
{
unsigned long int mask;

/* Check if index is greater than the size of n in binary coded decimal */
if (index > (sizeof(unsigned long int) * 8))
return (-1);

mask = ~(1UL << index); /* Create mask based on index position */

*num_ptr &= mask;

return (1);
}
