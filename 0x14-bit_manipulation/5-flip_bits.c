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
* flip_bits - returns the number of
* bits you would need to flip
* @a: first decimal number
* @b: second decimal number
*
* Return: number of bits to flip to get @b from @a
*/
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
unsigned int count = 0;
unsigned long int diff;

diff = a ^ b;

while (diff)
{
count += (diff & 1);
diff >>= 1;
}

return (count);
}
