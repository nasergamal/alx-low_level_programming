#include <stdlib.h>
/**
 * create_array - create a string of char
 * @size: desired size of array
 * @c: te char to fill the array with
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *n;

	n = malloc(size * sizeof(char));
	if (n == NULL)
		return (n);
	for (i = 0; i < size; i++)
	{
		n[i] = c;
	}
	return (n);
}
