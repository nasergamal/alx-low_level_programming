#include <stdlib.h>

/**
 * _realloc - reallocate memory based on requirement
 * @ptr: pointer to already allocated memory
 * @old_size: the size of ptr
 * @new_size: the new size to be allocate
 *
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *n;

	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	s = malloc(new_size);
	if (s == NULL || ptr == NULL)
	{
		return (s);
	}
	n = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		s[i] = n[i];
	free(ptr);
	return (s);
}
