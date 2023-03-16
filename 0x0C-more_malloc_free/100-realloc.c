#include <stdlib.h>

void me(char *s, void *p, unsigned int o, unsigned int n);

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
	void *s;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL )
	{
		s = malloc(new_size + old_size);
		free(ptr);
		return (s);
	}
	s = malloc(new_size);
	if (s == NULL)
	{
		return (s);
	}
	s = ptr;
	free(ptr);
	return (s);
}
