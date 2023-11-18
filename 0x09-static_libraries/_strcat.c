#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: A pointer to the destination buffer
 */
char *_strcat(char *dest, char *src)
{
    char *original = dest;

    while (*dest != '\0')
        dest++;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';

    return original;
}

