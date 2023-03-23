#include "main.h"

/**
 * print_number - prints an interger.
 *
 * @n: number.
 */
void print_number(int n) {
    int divisor = 1;
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    while (n / divisor >= 10) {
        divisor *= 10;
    }
    while (divisor > 0) {
        int digit = n / divisor;
        _putchar('0' + digit);
        n -= digit * divisor;
        divisor /= 10;
    }
}
