#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Finds and prints the sum of the even-valued terms in the
* Fibonacci sequence whose values do not exceed 4,000,000.
*
* Return: Always 0 (success)
*/

int main(void)
{
int fib1 = 1, fib2 = 2, fib_sum = 0, even_sum = 0;

/* Loop through the Fibonacci sequence */
while (fib_sum <= 4000000)
{
fib_sum = fib1 + fib2; /* Calculate the next Fibonacci number */

/* Check if the Fibonacci number is even */
if (fib_sum % 2 == 0)
even_sum += fib_sum; /* Add it to the sum of even-valued terms */

/* Update the previous two Fibonacci numbers */
fib1 = fib2;
fib2 = fib_sum;
}

printf("%d\n", even_sum); /* Print the sum of even-valued terms */

return (0);
}
