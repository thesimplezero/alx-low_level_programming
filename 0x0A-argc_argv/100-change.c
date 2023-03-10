#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the minimum number of coins
*        to make change for an amount of money.
*
* @argc: holds the number of arguments passed
* @argv: array pointer that holds the arguments passed
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int cnts, coins_num = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
cnts = atoi(argv[1]);
while (cnts > 0)
{
if (cnts >= 25)
cnts -= 25;
else if (cnts >= 10)
cnts -= 10;
else if (cnts >= 5)
cnts -= 5;
else if (cnts >= 2)
cnts -= 2;
else if (cnts >= 1)
cnts -= 1;
coins_num += 1;
}
}
printf("%d\n", coins_num);
return (0);
}
