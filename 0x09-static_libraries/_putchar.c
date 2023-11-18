#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to write
 *
 * Return: On success, the number of characters written (1); on error, -1
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

