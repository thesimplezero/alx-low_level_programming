#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a listint_t list.
* @head: Double pointer to the head of the list.
* @n: The integer value to be added to the new node.
*
* Return: The address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}

/* Initialize the new node's data, set its next pointer to the current head */
new_node->n = n;
new_node->next = *head;

/* Update the head of the list to point to the new node */
*head = new_node;

return (new_node);
}
