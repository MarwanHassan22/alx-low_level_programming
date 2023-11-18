#include "main.h"

/**
 * _rev_string - Reverses a string
 * @s: The string to reverse
 */
void _rev_string(char *s)
{
    int length = _strlen(s);
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

