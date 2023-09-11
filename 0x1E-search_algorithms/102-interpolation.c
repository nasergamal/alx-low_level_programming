#include "search_algos.h"

/**
 * interpolation_search - interpolation search algorithm
 * @array: array to be searched
 * @size: array size
 * @value: the value to find in array
 *
 * Return: value index or -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t start, end, pos;

	if (!array || size == 0)
		return (-1);
	for (start = 0, end = size - 1; start <= end; )
	{
		pos = (start + (((double)(end - start)
				/ (array[end] - array[start])) * (value - array[start])));
		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			start = pos + 1;
		else
			end = pos - 1;
	}
	return (-1);
}
