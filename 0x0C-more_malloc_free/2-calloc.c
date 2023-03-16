#include <stdlib.h>

/**
 * _calloc - allocate memory set to zero
 * @nmemb: number of elements
 * @size: sizeof(type)
 *
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL) /* Redundant remove later*/
		return (s);
	return (s);
