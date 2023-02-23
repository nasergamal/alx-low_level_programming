#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: the number of '\' to be printed
 *
 * Description: print a diagonal
 *
 * Return: line
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			_putchar('\');
			_putchar('\n');
			continue;
		}
		_putchar(' ' * i)
		_putchar('\');
		_putchar('\n')
	}
}
