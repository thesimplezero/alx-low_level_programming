#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the head of the list
*
* Return: The number of nodes in the list
*/
size_t print_list(const list_t *h)
{
size_t count = 0;

if (h == NULL)
return (0);

while (h != NULL)
{
if (h->str == NULL)
printf("[%u] %s\n", 0, "(nil)");
else
printf("[%u] %s\n", (unsigned int) h->len, h->str);

h = h->next;
count++;
}

return (count);
}
