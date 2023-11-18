#include "main.h"

/**
 * _memcpy - Copies memory area from source to destination
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the destination memory area @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *original = dest;

    while (n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    return original;
}

