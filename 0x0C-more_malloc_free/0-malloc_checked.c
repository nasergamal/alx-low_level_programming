#include <stdlib.h>

/**
 * malloc_checked - allocate memory with malloc
 * @b: the size
 *
 * Return: pointer to address
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
