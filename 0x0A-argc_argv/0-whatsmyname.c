#include "main.h"
#include <stdio.h>

/**
 * print_program_name - Prints the name of the program
 * @program_name: The name of the program
 */
void print_program_name(char *program_name) {
    printf("%s\n", program_name);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[]) {
    if (argc > 0) {
        print_program_name(argv[0]);
    } else {
        fprintf(stderr, "Error: Program name not available.\n");
        return 1;
    }

    return 0;
}

