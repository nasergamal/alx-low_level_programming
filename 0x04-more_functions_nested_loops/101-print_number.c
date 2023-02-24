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
	int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}

	if (m / 10)
		print_number(m / 10);
	_putchar(m % 10 + '0');
}
