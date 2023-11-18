#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The string containing the characters to search for
 *
 * Return: A pointer to the first occurrence in @s of any character in @accept, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        if (_strchr(accept, *s) != NULL)
            return s;
        s++;
    }

    return NULL;
}

