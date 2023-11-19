#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[]) {
    if (argc > 1 && strcmp(argv[1], "-Wall") == 0) {
        #pragma GCC diagnostic error "-Wall"
    }

    printf("%d\n", argc - 1);

    return 0;
}

