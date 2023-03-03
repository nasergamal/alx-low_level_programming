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
	int i, n, m, q = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size;)
	{
		printf("08x:", q);
		for (n = 0; n < 10; n += 2, i += 2)
		{
			if (i < size)
				printf(" %02x%02x ", b[i], b[i + 1]);
			else
				printf("      ");
		}
		for (m = 0, i -= 10; m < 10; m++, i++)
			if (i >= size)
				printf(" ");
			else if ((b[i] < 32 || b[i] > 126))
				printf(".");
			else
				printf("%c", b[i]);
		putchar('\n');
		q += 10;
	}
}
