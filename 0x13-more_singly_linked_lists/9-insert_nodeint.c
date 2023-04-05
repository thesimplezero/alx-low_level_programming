#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position
* @head: Double pointer to the head of the list
* @idx: Index of the list where the new node should be added
* @n: Data for the new node
*
* Return: Address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_nd;
listint_t *crrnt_nd;
unsigned int counter;

if (head == NULL)
return (NULL);

new_nd = malloc(sizeof(listint_t));
if (new_nd == NULL)
return (NULL);

new_nd->n = n;
new_nd->next = NULL;

if (idx == 0)
{
new_nd->next = *head;
*head = new_nd;
return (new_nd);
}

crrnt_nd = *head;
counter = 0;

while (crrnt_nd != NULL)
{
if (counter + 1 == idx)
{
new_nd->next = crrnt_nd->next;
crrnt_nd->next = new_nd;
return (new_nd);
}

crrnt_nd = crrnt_nd->next;
counter++;
}

free(new_nd);
return (NULL);
}
