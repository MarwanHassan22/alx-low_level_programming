#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the function terminates the program with exit code 98.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);

    if (ptr == NULL)
    {
        /* If malloc fails, terminate the program with exit code 98 */
        fprintf(stderr, "Memory allocation failed\n");
        exit(98);
    }

    return ptr;
}

