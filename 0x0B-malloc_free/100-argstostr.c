#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to a new string containing the concatenated arguments,
 * or NULL if ac == 0 or av == NULL, or if it fails.
 */
char *argstostr(int ac, char **av)
{
    char *concatenated;
    int i, j, total_length = 0, current_length = 0;

    /* Check if ac == 0 or av == NULL */
    if (ac == 0 || av == NULL)
        return NULL;

    /* Calculate the total length of the concatenated string */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            total_length++;
        }
        total_length++; /* For the newline character */
    }

    /* Allocate memory for the concatenated string */
    concatenated = malloc((total_length + 1) * sizeof(char));

    /* Check if memory allocation is successful */
    if (concatenated == NULL)
        return NULL;

    /* Copy the arguments into the concatenated string with newlines */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            concatenated[current_length] = av[i][j];
            current_length++;
        }
        concatenated[current_length] = '\n';
        current_length++;
    }

    /* Null-terminate the concatenated string */
    concatenated[current_length] = '\0';

    return concatenated;
}

