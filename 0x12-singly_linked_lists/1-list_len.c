#include "lists.h"

/**
* list_len - gets the number of nodes
* @h: pointer to the head (first node)
*
* Description: This function takes a pointer to the first node of a list
* and iterates through the list, counting the number of nodes. The function
* returns the total number of nodes in the list.
*
* Return: number of nodes
*/
size_t list_len(const list_t *h)
{
size_t node_count = 0;

/* Iterate through the list, counting the number of nodes */
while (h != NULL)
{
/* Go to the next node */
h = h->next;

/* Increment the node count */
node_count++;
}

return node_count;
}
