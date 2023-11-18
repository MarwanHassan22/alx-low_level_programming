#include "main.h"
#include <stddef.h>


/**
 * _strcspn - Gets the length of a prefix substring not containing certain characters
 * @s: The string to check
 * @reject: The string containing the characters to avoid
 *
 * Return: The number of bytes in @s which consist only of bytes not in @reject
 */
unsigned int _strcspn(char *s, char *reject)
{
    unsigned int count = 0;

    while (*s != '\0' && _strchr(reject, *s) == NULL)
    {
        count++;
        s++;
    }

    return count;
}

