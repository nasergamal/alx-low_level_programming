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
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
