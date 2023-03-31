#include <stdlib.h>
#include "lists.h"

/**
* clear_list - frees all nodes in a single linked list
*
* @head: pointer to the first node of the list
*
* Return: nothing
*/
void clear_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
