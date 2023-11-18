#include "main.h"

/**
 * _strncpy - Copies at most n bytes from source string to destination buffer
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of bytes to copy
 *
 * Return: A pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *original = dest;

    while (*src != '\0' && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    while (n > 0)
    {
        *dest = '\0';
        dest++;
        n--;
    }

    return original;
}

