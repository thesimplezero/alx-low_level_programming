#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
* @h: A pointer to the address of the head of the list.
* @idx: The index of the position to insert the new node, starting from 0.
* @n: The data for the new node.
*
* Return: The address of the new node or NULL if it fails.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int i;

if (h == NULL)  /* Check if the list exists */
return (NULL);

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

/* Case when list is empty or adding at the beginning */
if (*h == NULL || idx == 0)
{
if (*h)
(*h)->prev = new_node, new_node->next = *h;
*h = new_node;
return (new_node);
}

/* Find position to insert */
temp = *h;
for (i = 0; i < idx - 1 && temp->next != NULL; i++)
temp = temp->next;

if (i == idx - 1)  /* Insert if the position is valid */
{
new_node->next = temp->next;
new_node->prev = temp;
if (temp->next)
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}

/* Free the node if the index is out of bound */
free(new_node);
return (NULL);
}
