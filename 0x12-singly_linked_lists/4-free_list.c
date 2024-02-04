#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list_t list.
 */
void free_list(list_t *head)
{
    list_t *current, *next;

    current = head;

    /* Traverse the list and free each node */
    while (current != NULL)
    {
        next = current->next; /* Save the next node before freeing */
        free(current->str);   /* Free the string in the current node */
        free(current);        /* Free the current node */
        current = next;       /* Move to the next node */
    }
}

