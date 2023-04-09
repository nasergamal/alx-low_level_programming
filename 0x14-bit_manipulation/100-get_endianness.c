#include "main.h"

/**
 * get_endianness - check endianess
 *
 * Return: 1 for little endian and 0 for big endian
 */

int get_endianness(void)
{
	int i = 2;
	char *e = (char *)&i;

	if (*e)
		return (1);
	else
		return (0);
}
