#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
    int n;
    int digit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Get the last digit of n */
    digit = abs(n) % 10;

    /* Print the status of the last digit */
    if (digit > 5)
        printf("Last digit of %d is %d and is greater than 5\n", n, digit);
    else if (digit == 0)
        printf("Last digit of %d is %d and is 0\n", n, digit);
    else
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);

    return (0);
}
