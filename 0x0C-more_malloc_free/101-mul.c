#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: The number of characters printed
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _puts - Prints a string to stdout
 * @str: The string to print
 */
void _puts(char *str)
{
    while (*str)
    {
        _putchar(*str);
        str++;
    }
}

/**
 * multiply - Multiplies two numbers represented as strings
 * @num1: The first number
 * @num2: The second number
 */
void multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j;
    int *result, carry = 0, sum, result_size;

    while (num1[len1])
        len1++;

    while (num2[len2])
        len2++;

    result_size = len1 + len2;
    result = malloc(sizeof(int) * result_size);

    if (result == NULL)
    {
        _puts("Error\n");
        exit(98);
    }

    for (i = 0; i < result_size; i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;

        for (j = len2 - 1; j >= 0; j--)
        {
            sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
            carry = sum / 10;
            result[i + j + 1] = sum % 10;
        }

        result[i + j + 1] = carry;
    }

    for (i = 0; i < result_size - 1; i++)
    {
        if (result[i] != 0)
            break;
    }

    for (; i < result_size; i++)
        _putchar(result[i] + '0');

    _putchar('\n');

    free(result);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        _puts("Error\n");
        return 98;
    }

    multiply(argv[1], argv[2]);

    return 0;
}

