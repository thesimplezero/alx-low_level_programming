#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a listint_t list.
* @head: Double pointer to the head of the list.
* @n: The integer value to be added to the new node.
*
* Return: The address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *last_node;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}

/* Initialize the new node's data and set its next pointer to NULL */
new_node->n = n;
new_node->next = NULL;

/* If the list is empty, set the new node as the head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/* Traverse the list to find the last node */
last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}

/* Set the next pointer of the last node to the new node */
last_node->next = new_node;

return (new_node);
}
