#include <stdio.h>
#include "main.h"

/**
 * print_line - Entry point
 * @n: the number of '_' required
 * Description: print a line
 *
 * Return: line
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	_putchar('_' * n);
}
