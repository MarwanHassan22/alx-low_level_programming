#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a linked list
 * @head: Pointer to the head of the list
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow = head, *fast = head;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        /* If slow and fast meet, there is a loop */
        if (slow == fast)
        {
            /* Move slow to the head and start iterating both pointers until they meet */
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return slow; /* Return the node where the loop starts */
        }
    }

    return NULL; /* No loop found */
}

