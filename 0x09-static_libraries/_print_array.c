#include "main.h"

/**
 * _print_array - Prints n elements of an array, followed by a newline
 * @a: The array to print
 * @n: The number of elements to print
 */
void _print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        _printf("%d", a[i]);

        if (i < n - 1)
            _printf(", ");
    }

    _printf("\n");
}

