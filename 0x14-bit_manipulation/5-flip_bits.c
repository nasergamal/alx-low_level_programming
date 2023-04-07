#include "main.h"

/**
 * flib_bit - count number of bits changed in 1st value to reach 2nd value
 * @n: first value
 * @m: 2nd value
 *
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int u = 0;
	n ^= m;
	for (; n > 0; n = n >> 1)
	{
		if ((n & 1))
			u += 1;

	}
	return (u);
}
