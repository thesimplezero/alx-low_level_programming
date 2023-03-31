#include "lists.h"
#include <stdio.h>

/**
* print_list - print elements in a linked list
* @h: pointer to head first node
*
* Description: This function takes a pointer to the first node of a list
* and iterates through the list, printing each node's string and length.
* The function returns the total number of nodes in the list.
*
* Return: Number of nodes
*/
size_t print_list(const list_t *h)
{
size_t node_count = 0;

/* Iterate through the list, printing each node's string and length */
while (h != NULL)
{
/* If the string is NULL, print the length as 0 and the string as (nil) */
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%lu] %s\n", h->len, h->str);
}

/* Go to the next node */
h = h->next;

/* Increment the node count */
node_count++;
}

return node_count;
}
