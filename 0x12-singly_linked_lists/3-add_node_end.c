#include <stdlib.h>
#include "lists.h"

/**
* append_node - appends a node at the end of the linked list
*
* @head: pointer to the first node of the list
* @str: string to add
*
* Return: NULL if it fails / starting addr of the list
*/

list_t *append_node(list_t **head, const char *str)
{
list_t *new_node, *current;
size_t string_len = 0;

/*set strig length to 0 if its NULL*/
if (str == NULL)
string_len = 0;
else
{
/*count length of string*/
while (str[string_len] != '\0')
string_len++;
}

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
new_node->len = string_len;
new_node->next = NULL;

current = *head;


if (current == NULL)
*head = new_node;
else
{

while (current->next != NULL)
current = current->next;
current->next = new_node;
}

return (*head);
}
