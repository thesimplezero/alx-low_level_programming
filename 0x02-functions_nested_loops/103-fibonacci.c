#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers, starting
 * with 1 and 2, separated by commas and spaces.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
    int i, fib1 = 1, fib2 = 2, fib3; /* Initialize the first two Fibonacci numbers */
    
    printf("%d, %d", fib1, fib2); /* Print the first two Fibonacci numbers */

    /* Calculate and print the next 96 Fibonacci numbers */
    for (i = 3; i <= 98; i++)
    {
        fib3 = fib1 + fib2; /* Calculate the next Fibonacci number */
        printf(", %d", fib3); /* Print the number separated by a comma and space */
        fib1 = fib2; /* Update the previous two Fibonacci numbers */
        fib2 = fib3;
    }

    printf("\n"); /* Print a new line character */
    return 0; 
}
