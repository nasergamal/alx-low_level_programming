#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Entry point
 * @size: the triangle size
 * Description: make a triangle out of #
 *
 * Return: pyramid
 */

void print_triangle(int size);
{
	int i, n, m;

	if (size == 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (n = size - i; n > 0; n--)
			_putchar(' ');
		for (m = 1; m <= i; m++)
			_putchar('#');
		_putchar('\n');
	}
}
