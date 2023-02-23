#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: loop for outputing numbers in certain range x10
 *
 * Return: nums
 */

void more_numbers(void)
{
	int i, c = 0;

	while (c < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		c++;
	}
	_putchar('\n');
}
