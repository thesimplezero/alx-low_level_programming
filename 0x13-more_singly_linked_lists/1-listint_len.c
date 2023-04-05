#include "lists.h"

/**
* listint_len - Returns the number of elements in a linked list
* @h: Pointr to the head of the list
*
* Return: The number of elements in the lst
*/
size_t listint_len(const listint_t *h)
{
size_t elements_count = 0;
const listint_t *current_element = h;

/* Traverse the list and count the elements */
while (current_element != NULL)
{
elements_count++;
current_element = current_element->next;
}

return (elements_count);
}
