#include <stddef.h>
/**
 * array_iterator - excute a function on each parameter of a given array
 * @array: array
 * @size: array size
 * @action: the function to excute
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
