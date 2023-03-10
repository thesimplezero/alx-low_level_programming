#include <stdio.h>

/**
* main - Entry point
*
* Description: finds the sum of even-valued terms
*              in the Fibonacci sequence not exceeding 4,000,000
*
* Return: Always 0 (Success)
*/

int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, sum = 0, temp;

for (count = 0; fib2 <= 4000000; ++count)
{
if (fib2 % 2 == 0)
{
sum += fib2;
}

temp = fib1 + fib2;
fib1 = fib2;
fib2 = temp;
}

printf("%lu\n", sum);

return (0);
}
