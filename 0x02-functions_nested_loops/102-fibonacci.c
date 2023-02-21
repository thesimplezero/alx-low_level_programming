#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 positive Fibonacci numbers, starting with 1 and 2,
 * separated by comma and space.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
    int count = 2; /* Count of Fibonacci numbers printed so far */
    int fib1 = 1, fib2 = 2, fib;

    /* Print the first two Fibonacci numbers */
    printf("%d, %d", fib1, fib2);

    /* Calculate and print the next 48 Fibonacci numbers */
    while (count < 50)
    {
        fib = fib1 + fib2; /* Calculate the next Fibonacci number */
        if (fib > 0) /* Check if it is positive */
        {
            printf(", %d", fib); /* Print it separated by comma and space */
            count++; /* Update the count of Fibonacci numbers printed */
        }
        fib1 = fib2; /* Update the previous two Fibonacci numbers */
        fib2 = fib;
    }

    printf("\n"); /* Print a new line character */
    return 0; /* Indicate success */
}
