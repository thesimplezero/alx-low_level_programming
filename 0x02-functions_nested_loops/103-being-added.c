#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds the sum of all even-valued terms
 *              in the Fibonacci sequence whose values
 *              do not exceed 4,000,000 and prints each
 *              even number being added and the total sum
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int sum = 0, a = 0, b = 1, c = 0;

    while (c <= 4000000)
    {
        c = a + b;

        if (c % 2 == 0)
        {
            printf("%d ", c);
            sum += c;
        }

        a = b;
        b = c;
    }

    printf("\nTotal sum: %d\n", sum);

    return (0);
}
