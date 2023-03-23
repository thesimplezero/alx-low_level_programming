#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - A function that prints strings, followed by a new line
* @separator: A pointer to the separator string
* @n: The number of input strings
*
* Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int index;
char *str;

/* Iterate the argument list from the start */
va_start(ap, n);

for (index = 0; index < n; index++)
{
str = va_arg(ap, char *);
if (str)
printf("%s", str);
else
printf("(nil)");

if (separator && index != n - 1)
printf("%s", separator);
}

/* Clean up */
va_end(ap);
printf("\n");
}
