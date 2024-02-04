#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *last_node;
    unsigned int len = 0;

    /* Calculate the length of the string */
    while (str && str[len])
        len++;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    /* Duplicate the string */
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = len;
    new_node->next = NULL;

    /* If the list is empty, make the new node the head */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* Otherwise, traverse the list to find the last node */
    last_node = *head;
    while (last_node->next != NULL)
        last_node = last_node->next;

    /* Attach the new node to the end of the list */
    last_node->next = new_node;

    return (new_node);
}

