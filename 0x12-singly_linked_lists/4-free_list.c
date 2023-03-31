#include "lists.h"
#include <stdlib.h>

/**
* free_list - free single list link
* @head: pointer to the first node of the list
*
* Description: This function takes a pointer to the first node of a list
* and iterates through the list, freeing the memory allocated for each node
* and the node's string.
*
* Return: nothing
*/
void free_list(list_t *head)
{
list_t *current;

/* Iterate through the list, freeing the current node's string and the node */
while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
