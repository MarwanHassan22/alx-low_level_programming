#include "main.h"

/*
 * _strlen_recursion : returns the length of the string
 * s : is the pointer to the string 
  return int that express the number of the characters of the string
 */

int _strlen_recursion(char *s)
{
int ntr = 0;

if (*s > '\0')
{
	ntr += _strlen_recursion(s + 1) + 1;
}

return (ntr);
}
