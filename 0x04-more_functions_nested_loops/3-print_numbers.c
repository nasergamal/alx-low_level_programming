#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: loop for outputing numbers in certain range
 *
 * Return: nums
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
