#include "main.h"

/**
 * is_prime_recursive - Helper function to check primality recursively
 * @n: The number to check for primality
 * @divisor: The current divisor to check against
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_recursive(int n, int divisor)
{
    /* Base cases */
    if (n < 2) /* Numbers less than 2 are not prime */
        return 0;
    if (divisor == 1) /* 1 is not a prime number */
        return 1;

    /* Check if n is divisible by the current divisor */
    if (n % divisor == 0)
        return 0; /* Not a prime number if divisible by any divisor other than 1 */

    /* Recursively check with the next divisor */
    return is_prime_recursive(n, divisor - 1);
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number, otherwise return 0
 * @n: The number to check for primality
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    /* Start the recursion with the initial divisor value */
    return is_prime_recursive(n, n - 1);
}

