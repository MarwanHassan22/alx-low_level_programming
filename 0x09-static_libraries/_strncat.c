#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of bytes to use from src
 *
 * Return: A pointer to the destination buffer
 */
char *_strncat(char *dest, char *src, int n)
{
    char *original = dest;

    while (*dest != '\0')
        dest++;

    while (*src != '\0' && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    *dest = '\0';

    return original;
}

