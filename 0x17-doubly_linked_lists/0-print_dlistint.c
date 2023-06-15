#include "lists.h"

/**
* print_dlistint - Prints all elements of a doubly linked list of ints.
* @head: Pointer to the first node in the list.
*
* This function prints all the elements of a dlistint_t list, from the first
* node, to the standard output, one number per line. It also returns the number
* of nodes in the list.
*
* Return: The number of nodes in the list.
*/
size_t print_dlistint(const dlistint_t *head)
{
const dlistint_t *node;
size_t count;

/* Initialize counter. */
count = 0;

/* Check if the list is empty. */
if (head == NULL)
return (count);

/* Navigate to the beginning of the list, if not already there. */
for (node = head; node->prev != NULL; node = node->prev)
;

/* Iterate over the nodes in the list. */
for (; node != NULL; node = node->next)
{
printf("%d\n", node->n);
count++;
}

return (count);
}
