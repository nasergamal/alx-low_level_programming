#include <stdlib.h>
char *me(char *s, unsigned int n);
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
	if (s == NULL)
		return (NULL);
	me(s, (nmemb * size));
	return (s);
}

/**
 * me - set memory to 0
 * @s: pointer
 * @n: size
 *
 * Return: pointer
 */
char *me(char *s, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = 0;
	return (s);
}
