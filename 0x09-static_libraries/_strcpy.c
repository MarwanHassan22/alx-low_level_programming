#include "main.h"

/**
 * _strcpy - Copies a string to a destination buffer
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: A pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
    char *original = dest;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';

    return original;
}

