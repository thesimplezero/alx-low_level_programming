#include "lists.h"

/**
* print_listint - Prints all the elements of a list.
* @h: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint(const listint_t *h)
{
size_t node_number = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
node_number++;
}

return (node_number);
}
