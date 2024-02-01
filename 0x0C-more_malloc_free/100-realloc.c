#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc(old_size).
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: Pointer to the newly allocated memory block.
 *         If new_size > old_size, the "added" memory is not initialized.
 *         If new_size == old_size, returns ptr.
 *         If ptr is NULL, the call is equivalent to malloc(new_size).
 *         If new_size is equal to zero, and ptr is not NULL, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;
    unsigned int min_size, i;

    /* If new_size is zero, and ptr is not NULL, equivalent to free(ptr) */
    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return NULL;
    }

    /* If ptr is NULL, equivalent to malloc(new_size) */
    if (ptr == NULL)
    {
        new_ptr = malloc(new_size);
        return new_ptr;
    }

    /* Determine the minimum size between old_size and new_size */
    min_size = old_size < new_size ? old_size : new_size;

    /* Allocate memory for the new block */
    new_ptr = malloc(new_size);

    /* Check if malloc fails */
    if (new_ptr == NULL)
        return NULL;

    /* Copy the contents from the old block to the new block */
    for (i = 0; i < min_size; i++)
        *((char *)new_ptr + i) = *((char *)ptr + i);

    /* Free the old block */
    free(ptr);

    return new_ptr;
}

