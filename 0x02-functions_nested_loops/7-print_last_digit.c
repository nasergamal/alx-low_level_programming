#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - leaving best for last
 * @n: the remaining number
 *
 * Description: leaves last digits
 *
 * Return: a number
 */

int print_last_digit(int n)
{
int r;
n = abs(n);

r = n % 10;

_putchar(r);

return (r);
}
