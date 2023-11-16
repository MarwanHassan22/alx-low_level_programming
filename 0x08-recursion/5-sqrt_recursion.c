#include "main.h"

/**
 * sqrt_recursive - Helper function to calculate the square root recursively
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of the number
 */
int sqrt_recursive(int n, int guess)
{
    int square = guess * guess;

    /* Base cases */
    if (square == n)
        return guess;
    else if (square < n)
        return sqrt_recursive(n, guess + 1);
    else
        return -1; /* Indicates that the square root is not a whole number */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of the number, or -1 if not a perfect square
 */
int _sqrt_recursion(int n)
{
    /* Base case: square root of 0 is 0 */
    if (n == 0)
        return 0;

    /* Start the recursion with an initial guess of 1 */
    return sqrt_recursive(n, 1);
}

