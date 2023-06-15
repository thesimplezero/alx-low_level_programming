#include "lists.h"

/**
* add_dnodeint - Adds a new node at the start of a dlistint_t list.
* @head: Double pointer to the first node in the list.
* @n: The integer to put in the new node.
*
* Return: Address of the new node, or NULL if it fails.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

/* Allocate memory for the new node. */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}

/* Initialize the new node. */
new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;

/* Adjust the head node's prev pointer if the list is not empty. */
if (*head != NULL)
{
(*head)->prev = new_node;
}

/* Point head to the new node. */
*head = new_node;

return (new_node);
}
