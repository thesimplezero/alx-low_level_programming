#include "lists.h"

/**
* free_listint - Frees a list.
* @head: Pointer to the head of the list
*
* Description: Iterates through the list and frees each node.
*/
void free_listint(listint_t *head)
{
listint_t *crrnt_node;
listint_t *next_node;
crrnt_node = head;

while (crrnt_node != NULL)
{
next_node = crrnt_node->next;
free(crrnt_node);
crrnt_node = next_node;
}
}
