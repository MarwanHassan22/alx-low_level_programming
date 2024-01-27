#include "main.h"

/**
 * create_array - Creates an array of chars and intializes it with a spicific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 */
char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int i;

	/*Check if size is 0 */
	if (size == 0)
		return NULL;

	/*Allocate memory for the array */
	array = malloc(size * sizeof(char));

	/*Check if memory allocation is successful */
	if (array == NULL)
		return NULL;

	/*Initialize the array with the specified character */
	for (i = 0; i < size; i++)
		array[i] = c;


	return array;
}

