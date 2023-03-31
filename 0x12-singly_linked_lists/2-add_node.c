#include "lists.h"
#include <stdlib.h>
#include <string.h>

/* add_node - adds a node at the beginning of the linked list
*
* @head: pointer to the first node of the list
* @str: string to add to the new node in the list
*
* Return: NULL if it fails / starting addr of the list
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
size_t str_len;
char *str_copy;

/* Allocate memory for the new node */
new_node = (list_t *) malloc(sizeof(list_t));
if (new_node == NULL)
{
return NULL;
}

/* Set string length to 0 if it's NULL */
if (str == NULL)
{
str_len = 0;
}
else
{
/* Count length of string */
for (str_len = 0; str[str_len] != '\0'; ++str_len)
{
}
}

/* Copy the string to the new node */
str_copy = (char *) malloc((str_len + 1) * sizeof(char));
if (str_copy == NULL)
{
free(new_node);
return NULL;
}
memcpy(str_copy, str, str_len + 1);

/* Initialize the next addr of new_node to the current head */
new_node->next = *head;
new_node->str = str_copy;
new_node->len = str_len;

/* Update the head of the list to the new node */
*head = new_node;

return *head;
}
