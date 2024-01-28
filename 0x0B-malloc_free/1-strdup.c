#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The input string.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
    char *duplicate;
    unsigned int length = 0, i;

    /* Check if str is NULL */
    if (str == NULL)
        return NULL;

    /* Calculate the length of the string */
    while (str[length] != '\0')
        length++;

    /* Allocate memory for the duplicate string */
    duplicate = malloc((length + 1) * sizeof(char));

    /* Check if memory allocation is successful */
    if (duplicate == NULL)
        return NULL;

    /* Copy the characters from str to duplicate */
    for (i = 0; i <= length; i++)
        duplicate[i] = str[i];

    return duplicate;
}

