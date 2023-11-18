#include "main.h"

/**
 * _sqrt_recursion - Calculates the square root of a number using recursion
 * @n: The number to calculate the square root for
 *
 * Return: The square root of n, -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    int i = 1;

    while (i * i < n)
        i++;

    return (i * i == n) ? i : -1;
}

