#include "main.h"

/**
 * set_bit - change bit value at index to 1
 * @n: number to be modified
 * @index: index
 *
 * Return: 1 or -1 (success or failure)
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
