#include <stdio.h>
#include "main.h"

/**
 * print_buffer - print buffers
 * @b: the array to be printed
 * @size: arrays size
 *
 * Description: takes an array and print it in 10 bytes per line form
 *
 * Return nothing
 */

void print_buffer(char *b, int size)
{
	int i, n, m;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size;)
	{
		printf("%p:", &b[i]);
		for (n = 0; n < 10; n += 2, i += 2)
		{
			printf(" %02x%02x ", b[i], b[i + 1]);
		}
		for (m = 0, i -= 10; m < 10; m++, i++)
			printf("%c", b[i]);
		putchar('\n');
	}
}
