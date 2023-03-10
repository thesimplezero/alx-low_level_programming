#include <stdio.h>
#include <stdlib.h>

/**
* is_num - checks if a string contains only digits
* @s: the string to check
*
* Return: 1 if the string contains only digits, 0 otherwise
*/
int is_num(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

/**
* main - program that sums command line arguments that are digits
* @argc: the number of arguments
* @argv: an array of pointers to the arguments
*
* Return: 0 on success, 1 on failure
*/
int main(int argc, char *argv[])
{
int i, sum;

if (argc == 1)
{
printf("0\n");
return (0);
}

sum = 0;
i = 1;

while (i < argc)
{
if (is_num(argv[i]))
sum += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
i++;
}

printf("%d\n", sum);
return (0);
}
