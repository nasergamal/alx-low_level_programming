#include <string.h>

/**
 * infinite_add - add any numbers given in char type
 * @n1: the first of our two numbers
 * @n2: the second number
 * @r: the storage variable
 * @size_r: storage size
 *
 * Description: adds numbers by converting string to int and back
 *
 * Return: sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n = strlen(n1), m = strlen(n2), v = 0, e = 0, c, b;

	if (n > size_r || m > size_r)
		return (0);
	for (n -= 1, m -= 1, c = 0; c < size_r - 1; c++, n--, m--)
	{
		v = e;
		if (n >= 0)
			v += n1[n] - '0';
		if (m >= 0)
			v += n2[m] - '0';
		if (n < 0 && m < 0 && v == 0)
			break;

		e = v / 10;
		r[c] = (v % 10 + '0');
	}
	r[c] = '\0';
	if (n >= 0 || m >= 0 || e)
		return (0);
	for (b = 0, c -= 1; b < c; b++, c--)
	{
		n = r[b];
		r[b] = r[c];
		r[c] = n;
	}
	return (r);
}
