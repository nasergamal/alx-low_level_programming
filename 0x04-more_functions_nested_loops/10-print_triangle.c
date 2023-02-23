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
	int i, n = 1;

	if (size == 0)
		_putchar('\n');
	for (i = size; i > 0; i--)
	{
		_putchar(" " * (i - 1))
		_putchar('#' * n)
		n++
	}
}
