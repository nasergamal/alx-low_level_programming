#include <stdio.h>
#include "main.h"

/**
 * print_square - Entry point
 * @size: the square dimensuin
 *
 * Description: print a diagonal
 *
 * Return: line
 */
void print_square(int size)
{
	int i;

	if (size == 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		_putchar('#' * size);
		_putchar('\n');
	}
}
