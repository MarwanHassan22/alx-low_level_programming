#include "main.h"

/**
 * _puts_recursoin : puts a string end with a new line
 * s : is a pointer to the string
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
