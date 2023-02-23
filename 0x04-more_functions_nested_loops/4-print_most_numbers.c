#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: loop for outputing numbers in certain range
 *
 * Return: nums
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	_putchar('\n');
	}
}
