#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - adds a node at the end of the linked list
* @head: pointer to the first node of the list
* @str: string to add to the new node in the list
*
* Description: This function creates a new node with the given string
* and adds it to the end of the linked list.
*
* Return: NULL if it fails / starting addr of the list
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
size_t str_len;
char *str_copy;

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

/* Allocate memory for the new node */
new_node = (list_t *) malloc(sizeof(list_t));
if (new_node == NULL)
{
return NULL;
}

/* Copy the string to the new node */
str_copy = (char *) malloc((str_len + 1) * sizeof(char));
if (str_copy == NULL)
{
free(new_node);
return NULL;
}
memcpy(str_copy, str, str_len + 1);

/* Initialize the new node */
new_node->str = str_copy;
new_node->len = str_len;
new_node->next = NULL;

/* Copy the starting node pointer to temp */
temp = *head;

/* If temp is NULL, place the new_node at the beginning of the list */
if (temp == NULL)
{
*head = new_node;
}
else
{
/* Iterate to the last node in the list */
while (temp->next != NULL)
{
temp = temp->next;
}
/* Add the new_node at the end of the list */
temp->next = new_node;
}

return *head;
}
