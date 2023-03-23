#include "variadic_functions.h"

/**
* print_char - prints a character
*
* @arg: a list of argument pointing
*       to the character to be printed
*
* Return: nothing
*/
void print_char(va_list arg)
{
char c = va_arg(arg, int);
printf("%c", c);
}

/**
* print_int - prints an integer
*
* @arg: a list of argument pointing
*       to the integer to be printed
*
* Return: nothing
*/
void print_int(va_list arg)
{
int n = va_arg(arg, int);
printf("%d", n);
}

/**
* print_float - prints a float
*
* @arg: a list of argument pointing
*       to the float to be printed
*
* Return: nothing
*/
void print_float(va_list arg)
{
float n = (float) va_arg(arg, double);
printf("%f", n);
}

/**
* print_string - prints a string
*
* @arg: a list of argument pointing
*       to the string to be printed
*
* Return: nothing
*/
void print_string(va_list arg)
{
char *str = va_arg(arg, char *);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}

/**
* print_all - prints anything
*
* @format: a string of characters representing
*          the argument types
*
* Description: Arguments not of type char,
*              int, float, or char * are ignored.
*
* Return: nothing
*/
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i = 0, j = 0;
char *separator = "";
func_printer funcs[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string}
};

/*initialize argument pointer*/
va_start(ap, format);

while (format != NULL && format[i])
{
j = 0;
while (j < 4 && (format[i] != *(funcs[j].symbol)))
j++;
if (j < 4)
{
printf("%s", separator);
funcs[j].print_func(ap);
separator = ", ";
}
i++;
}
printf("\n");

/*clean up*/
va_end(ap);
}
