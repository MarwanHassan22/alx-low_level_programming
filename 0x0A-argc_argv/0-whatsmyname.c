#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    /* Check if there is at least one argument */
    if (argc > 0)
    {
        /* Print the name of the program (including path) */
        printf("%s\n", argv[0]);
        return 0;
    }
    else
    {
        /* Print an error message if there are no arguments */
        fprintf(stderr, "Usage: %s <program_name>\n", argv[0]);
        return 1;
    }
}

