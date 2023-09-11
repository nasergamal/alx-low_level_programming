#include "search_algos.h"

void print_content(int *array, size_t start, size_t end);
/**
 * jump_search - jump search algorithm
 * @array: array to be searched
 * @size: array size
 * @value: the value to find in array
 *
 * Return: value index or -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, jump, i, step;

	if (!array || size == 0)
		return (-1);
	step = sqrt(size);
	for (start = 0, jump = 0; jump < size && array[jump] < value; jump += step)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		start = jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, jump);

	for (i = start; i <= jump && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
