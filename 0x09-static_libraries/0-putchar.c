#include main.h

/**
 * _putchar : writes the character c to stdout
 * @c : the character to print
 *
 * Return statment On success 1
 * On error : On error is -1 , and errno is set appropiately
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}

