#include <stdio.h>

/**
 * print_array - takes in an array
 * @a: the array in question
 * @n: array size
 *
 * Description: print out the array elements
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n - 1; m++)
		printf("%d, ", a[m]);
	if (n > 2)
		printf("%d\n", a[m]);
}
