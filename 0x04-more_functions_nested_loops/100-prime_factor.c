#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: get the biggest prime number
 *
 * Return: the biggest value
 */

int main(void)
{
	long int i = 612852475143, m;

	int c = 0;

	for (m = 1; m < 100000000; m += 2)
	{
		if (i % m == 0)
			c = m;
	}
	printf("%lu", c);
	return (0);
}
