#include "main.h"

/**
 * get_bit - get the bit value at given index
 * @n: the number to be searched
 * @index: index
 *
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
