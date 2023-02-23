#include <stdio.h>
#include "main.h"

/**
 * print_number: Entry point
 * @n: the input to be printed
 *
 * Description: printing numbers using putchar
 *
 * Return: the inputed value
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else if (n == 0)
		_putchar(n + '0');
	while (n > 0)
	{
		_putchar(n % 10 + '0');
		n /= 10;
	}
}
