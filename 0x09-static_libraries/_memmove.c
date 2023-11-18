#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _memmove - Copies memory area from source to destination, handling overlapping areas
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the destination memory area @dest
 */
char *_memmove(char *dest, char *src, unsigned int n)
{
    char *temp;

    if (dest == NULL && src == NULL)
        return NULL;

    temp = malloc(n * sizeof(char));

    if (temp == NULL)
        return NULL;

    _memcpy(temp, src, n);
    _memcpy(dest, temp, n);

    free(temp);

    return dest;
}

