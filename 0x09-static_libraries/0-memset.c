#include "main.h"
/**
 * _memset - fill a block of memory for a specific value
 * @s : starting a place of memory to store it 
 * @b : the desired value 
 * @n : number of bytes to be changed 
 *
 * Return : changed array with n bytes to store new value
 */

char*_memset(char*s, char c, unsigned int n)
{
	int i = 0;
	for(n>0;i++)
	{
		s[i]=b;
		n--;
	}
	return (s);
}

