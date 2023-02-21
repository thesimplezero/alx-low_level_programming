#include <stdio.h>

/**
* main - Prints the first 50 Fibonacci numbers in the set
*
* Return: Always 0 (Success)
*/
int main(void)
{
int count = 0;
long int fib1 = 1, fib2 = 2, fib;

/* Print the first 50 Fibonacci numbers in the set */
while (count < 50)
{
fib = fib1 + fib2; /* Calculate the next Fibonacci number */

if (fib <= 20365011074) /* Check if the Fibonacci number is in the set */
{
if (count != 0)
printf(", ");

printf("%ld", fib); /* Print the Fibonacci number */
count++; /* Increment the count of printed Fibonacci numbers */
}

fib1 = fib2; /* Update the previous two Fibonacci numbers */
fib2 = fib;
}

printf("\n"); /* Print a new line character */
return (0);
}
