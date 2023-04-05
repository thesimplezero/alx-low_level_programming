#include "lists.h"

/**
* pop_listint - Removes the head node of a linked list of integers and
* returns its value.
* @head: Double pointer to the head of the list.
*
* Return: The value of the removed head node, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
listint_t *tmp_nde;
int head_dat;
/* If the linked list is empty, return 0 */
if (head == NULL || *head == NULL)
{
return (0);
}

head_dat = (*head)->n;

tmp_nde = *head;

*head = (*head)->next;

free(tmp_nde);

/* Return the head node's data */
return (head_dat);
}
