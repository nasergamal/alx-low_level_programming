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
	int m;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return;
	}

	if (n >= 1000)
		m = 1000;
	else if (n >= 100 && n < 1000)
		m = 100;
	else
		m = 10;
	for (; m > 0; m /= 10)
	{
		_putchar(n / m + '0');
		n %= m;
	}
}
