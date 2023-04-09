#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 * @b: string containing binary
 *
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int m, n = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
		;
	for (i -= 1, m = 1; i >= 0; i--, m *= 2)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			n += m;
	}
	return (n);
}
