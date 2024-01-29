#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Ruturn: A pointer to a newly allocated space in memory containing 
 * the contents of s1 fllowed by the contents of s2 , or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{

	char *concatenated;
	unsigned int len_s1 = 0 , len_s2 = 0,i ,j;
	
	/*Treat NULL as an empty string */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if(s2 == NULL)
	{
		s2 = "";
	}

	/*Calculate the length of s1 and s2*/
	while(s1[len_s1] != '\0')
		len_s1++;
	while(s2[len_s2] != '\0')
		len_s2++;

	/*Allocate memory for the concatenated string*/
	concatenated = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	/*Check if memory allocation is successful */
	if (concatenated == NULL)
		return NULL;

	/*Copy the contents of s1 to concatenated */
	for (i = 0; i < len_s1; i++)
		concatenated[i] =s1[i];

	/*Copy the contents of s2 to concatenated */
	for (j = 0; j < len_s2; j++)
		concatenated[i + j] = s2[j];

	/*NULL-terminate the concatenated string*/
	concatenated[i + j] = '\0';
	
	return concatenated;
}

