#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: The memory area to fill
 * @b: The constant byte
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *original = s;

    while (n > 0)
    {
        *s = b;
        s++;
        n--;
    }

    return original;
}

