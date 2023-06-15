#include "lists.h"

/**
* dlistint_len - Counts the number of elements in a doubly linked list of ints.
* @head: Pointer to the first node in the list.
*
* This function counts the number of nodes in a dlistint_t list and returns the
* count.
*
* Return: The number of nodes in the list.
*/
size_t dlistint_len(const dlistint_t *head)
{
const dlistint_t *node;
size_t count;

/* Initialize counter. */
count = 0;

/* Check if the list is empty. */
if (head == NULL)
return (count);

/* Iterate over the nodes in the list. */
for (node = head; node != NULL; node = node->next)
{
count++;
}

return (count);
}
