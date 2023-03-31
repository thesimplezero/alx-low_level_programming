#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* insert_node - inserts a node at the beginning of the linked list
*
* @head: pointer to the pointer of the first node of the list
* @str: string to add to new node in the list
*
* Return: pointer to the starting address of the list
*/

list_t *insert_node(list_t **head, const char *str)
{
list_t *new_node;
size_t str_len = 0;

/*set strig length to 0 if its NULL*/
if (str == NULL)
str_len = 0;
else
{
/*count length of string*/
while (str[str_len] != '\0')
str_len++;
}

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
new_node->len = str_len;
new_node->next = *head;
*head = new_node;

return (*head);
}
