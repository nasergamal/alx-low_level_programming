#include "main.h"

/**
 * clear_bit - change bit value at index to 0
 * @n: number to be modified
 * @index: index
 *
 * Return: 1 or -1 (success or failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);


}
