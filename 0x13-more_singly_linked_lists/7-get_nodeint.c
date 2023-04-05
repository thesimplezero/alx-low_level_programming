#include "lists.h"
/**
* get_nodeint_at_index - Returns the nth node of a linked list
* @head: Pointer to the head of the list
* @index: The index of the node, starting at 0
* Return: Pointer to the nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int cntr = 0;

while (head != NULL)
{
if (cntr == index)
{
return (head);
}

head = head->next;
cntr++;
}
return (NULL);
}
