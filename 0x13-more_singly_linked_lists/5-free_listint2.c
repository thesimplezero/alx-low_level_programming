#include "lists.h"

/**
* free_listint2 - Frees a listint_t list and sets the head to NULL.
* @head: Double pointer to the head of the list.
*
* Description: Iterates through the list, frees each node, and sets the head to NULL.
*/
void free_listint2(listint_t **head)
{
listint_t *crrnt_node;
listint_t *next_node;

if (head == NULL || *head == NULL)
{
return;
}

crrnt_node = *head;

while (crrnt_node != NULL)
{
next_node = crrnt_node->next;
free(crrnt_node);
crrnt_node = next_node;
}

*head = NULL;
}
