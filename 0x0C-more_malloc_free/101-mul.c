#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiplies two numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: A pointer to the result of the multiplication.
 */
char *multiply(char *num1, char *num2);

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the arguments.
 *
 * Return: 0 on success, 98 on incorrect number of arguments or invalid input.
 */
int main(int argc, char *argv[])
{
    char *result;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    result = multiply(argv[1], argv[2]);
    if (result == NULL)
    {
        printf("Error\n");
        return (98);
    }

    printf("%s\n", result);
    free(result);

    return 0;
}

/**
 * multiply - Multiplies two numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: A pointer to the result of the multiplication.
 */
char *multiply(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int len_result = len1 + len2;
    int *result;
    int i, j, product, carry = 0;

    result = calloc(len_result + 1, sizeof(int));
    if (result == NULL)
        return (NULL);

    int final_result_len = len_result + 1;
    char *final_result = malloc(final_result_len);
    if (final_result == NULL)
    {
        free(result);
        return (NULL);
    }

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
            carry = product / 10;
            result[i + j + 1] = product % 10;
        }
        result[i + j + 1] = carry;
    }

    for (i = 0; i < len_result; i++)
        final_result[i] = result[i] + '0';

    final_result[len_result] = '\0';

    free(result);
    return (final_result);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

