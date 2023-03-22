/**
* print_name - Calls a function to print a name
* @name: Pointer to the name to be printed
* @f: Pointer to a function that will print the name
*
* Return: Always 0 (Success)
*/

void print_name(char *name, void (*f)(char *))
{
f(name);
}
