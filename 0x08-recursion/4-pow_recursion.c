#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base
 * @y: The exponent
 *
 * Return: The result of x raised to the power of y, or -1 for invalid input
 */
int _pow_recursion(int x, int y)
{
    /* Additional case: power of a negative number with a non-positive exponent is undefined */
    if (x == 0 && y == 0)
        return -1;

    /* Base case: any number raised to the power of 0 is 1 */
    if (y == 0)
        return 1;

    /* Recursively call with the same base and the next exponent */
    if (y > 0)
        return x * _pow_recursion(x, y - 1);
    else  /* Handle negative exponent */
        return 1.0 / (x * _pow_recursion(x, -y - 1));
}

