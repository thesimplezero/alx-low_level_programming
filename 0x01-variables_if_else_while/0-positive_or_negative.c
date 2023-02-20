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

int main(void)
{
	int num;

	srand(time(0));
	num = rand() - RAND_MAX / 2;

	/*my code goes here*/
	if (num > 0)
		printf("%i is positive\n", num);
	else if (num == 0)
		printf("%i is zero\n", num);
	else
		printf("%i is negative\n", num);

	return (0);
}
