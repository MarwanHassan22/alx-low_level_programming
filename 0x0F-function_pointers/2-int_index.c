#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a given function
 * @array: array to search
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: index of the first element for which cmp function does not return 0,
 * or -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array && cmp && size > 0)
    {
        int i;

        for (i = 0; i < size; i++)
        {
            if (cmp(array[i]))
                return i;
        }
    }
    return -1;
}

