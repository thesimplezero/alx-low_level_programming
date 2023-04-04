#ifndef LISTS_H
#define LISTS_H

/* Required libraries for this project */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* Definition of the listint_t structure */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototypes */

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif /* LISTS_H */
