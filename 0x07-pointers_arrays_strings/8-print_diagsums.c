#include <stdio.h>

/**
 * print_diagsums - get sums of diagonals
 * @a: the array
 * @size: size of array
 *
 * Description: calculate the sum of the diagonals of an array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, n, j = 0, m = 0;

	for (i = 0, n = size - 1; i < size; i++, n--)
	{
		j += a[(size * i) + i];
		m += a[(size * i) + n];
	}
	printf("%d, %d\n", j, m);
}
