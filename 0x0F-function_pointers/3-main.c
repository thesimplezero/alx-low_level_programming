#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Description: A program that performs an arithmetic operation on two integer
*              arguments based on an operator.
*
* @argc: the number of arguments passed to the program
* @argv: an array of pointers to the arguments passed to the program
*
* Return: 0 on success
*/
int main(int argc, char **argv)
{
int num1, num2;
char *operator;

/* Exit with an error message if arguments are not 4 */
if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];

/* Exit with an error message if operator is not valid */
if (get_op_func(operator) == NULL || strlen(operator) != 1)
{
printf("Error\n");
exit(99);
}

/* Exit with an error message if the user tries to divide by zero */
if ((*operator == '/' || *operator == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

printf("%d\n", get_op_func(operator)(num1, num2));

return (0);
}
