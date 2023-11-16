#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of the number, or -1 for invalid input
 */
int factorial(int n)
{
    /* Base case: factorial of 0 is 1 */
    if (n == 0)
        return 1;

    /* Additional case: factorial of negative number is undefined */
    if (n < 0)
        return -1;

    /* Recursively call with the next number and multiply by the current number */
    return n * factorial(n - 1);
}
