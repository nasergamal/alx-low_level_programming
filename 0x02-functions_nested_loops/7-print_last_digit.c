#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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

r = n % 10;

r = abs(r);

_putchar(r);

return (r);
}
