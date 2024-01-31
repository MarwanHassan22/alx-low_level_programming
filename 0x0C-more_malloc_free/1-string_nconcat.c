#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         If the function fails, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len_s1 = 0, len_s2 = 0;
    unsigned int i, j;
    char *concat;

    /* Check if s1 is NULL; treat it as an empty string */
    if (s1 == NULL)
        s1 = "";

    /* Check if s2 is NULL; treat it as an empty string */
    if (s2 == NULL)
        s2 = "";

    /* Calculate the length of s1 */
    while (s1[len_s1] != '\0')
        len_s1++;

    /* Calculate the length of s2 */
    while (s2[len_s2] != '\0')
        len_s2++;

    /* Allocate memory for the concatenated string */
    concat = malloc(sizeof(char) * (len_s1 + n + 1));

    /* Check if malloc fails */
    if (concat == NULL)
        return NULL;

    /* Copy characters from s1 to concat */
    for (i = 0; i < len_s1; i++)
        concat[i] = s1[i];

    /* Copy up to n characters from s2 to concat */
    for (j = 0; j < n && s2[j] != '\0'; i++, j++)
        concat[i] = s2[j];

    /* Null-terminate the concatenated string */
    concat[i] = '\0';

    return concat;
}

