#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return: Always 0 (Success)
*/

#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d is %s\n", n, (n > 0) ? "positive" : (n == 0) ? "zero" : "negative");

    return (0);
}
