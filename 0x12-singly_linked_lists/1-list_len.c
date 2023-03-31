#include "lists.h"

/**
* count_nodes - counts the number of nodes in a linked list
*
* @head: pointer to the head of the linked list
*
* Return: number of nodes in the linked list
*/

size_t count_nodes(const list_t *head)
{
size_t node_count = 0;

/*if head is null return 0 nodes*/
if (head == NULL)
return (0);

/*iterate through the nodes*/
while (head != NULL)
{
node_count++;
/*go to the next node*/
head = head->next;
}

return (node_count);
}
