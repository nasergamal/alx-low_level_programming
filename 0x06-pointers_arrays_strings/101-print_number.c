#include "main.h"

/**
 * print_number - takes an int and print it as char
 * @n: the int
 *
 * Description: print an integer using putchar equivalent
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int m;
	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	if (m / 10 != 0)
		print_number(m / 10);
	_putchar(m % 10 + '0');
}
