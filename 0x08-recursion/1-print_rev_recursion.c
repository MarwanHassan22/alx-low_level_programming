#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s : the string to be printed in reverse
 */

void _print_rev_recursion(char *s)
{
	/*base case end of string*/
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1); /*Recursively call with the next character */

	_putchar(*s); /* Print the current character */
}
