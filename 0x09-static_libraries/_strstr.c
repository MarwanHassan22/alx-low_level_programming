#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring within a string
 * @haystack: The string to search
 * @needle: The substring to locate
 *
 * Return: A pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack != '\0')
    {
        char *h = haystack;
        char *n = needle;

        while (*n != '\0' && *h == *n)
        {
            h++;
            n++;
        }

        if (*n == '\0')
            return haystack;

        haystack++;
    }

    return NULL;
}

