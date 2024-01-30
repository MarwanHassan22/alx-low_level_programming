#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if str is NULL
 * or if memory allocation fails.
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, count, word_length;

    if (str == NULL || *str == '\0')
        return NULL;

    /* Count the number of words in the string */
    for (i = 0, count = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
    }

    /* Allocate memory for the array of words */
    words = malloc((count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    /* Extract words from the string and store in the array */
    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            /* Calculate the length of the current word */
            for (word_length = 0; str[i + word_length] != ' ' && str[i + word_length] != '\0'; word_length++)
                ;

            /* Allocate memory for the current word */
            words[j] = malloc((word_length + 1) * sizeof(char));
            if (words[j] == NULL)
            {
                /* Free allocated memory on failure */
                for (k = 0; k < j; k++)
                    free(words[k]);
                free(words);
                return NULL;
            }

            /* Copy the current word to the array */
            for (k = 0; k < word_length; k++)
                words[j][k] = str[i + k];
            words[j][k] = '\0';

            j++;
            i += word_length;
        }
    }

    words[j] = NULL; /* Set the last element to NULL */

    return words;
}

