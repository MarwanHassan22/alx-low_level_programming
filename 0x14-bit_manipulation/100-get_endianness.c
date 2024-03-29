#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
    unsigned int n = 1;
    char *ch = (char *)&n;

    /* If the least significant byte is stored first (little endian) */
    if (*ch)
        return (1); /* Little endian */
    else
        return (0); /* Big endian */
}

