/* main.c */
#include "main.h"

int main(void) {
    _putchar('A');
    _putchar('\n');

    int result1 = _islower('a');
    int result2 = _isalpha('A');
    int result3 = _abs(-5);

    _putchar(result1 + '0');
    _putchar(result2 + '0');
    _putchar(result3 + '0');

    _putchar('\n');

    return 0;
}

