#include "main.h"

/**
 * _is_prime_number - Checks if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int _is_prime_number(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

