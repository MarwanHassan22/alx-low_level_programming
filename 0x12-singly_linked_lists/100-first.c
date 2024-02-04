#include <stdio.h>

/**
 * hare_and_tortoise - Prints a message before the main function is executed.
 * __attribute__((constructor)) ensures the function is executed before main.
 */
void __attribute__((constructor)) hare_and_tortoise(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

