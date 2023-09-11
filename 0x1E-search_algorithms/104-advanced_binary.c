#include "search_algos.h"

int rec_search(int *array, size_t start, size_t end, int value);
void print_content(int *array, size_t start, size_t end);
/**
 * advanced_binary - advanced binary search algorithm
 * @array: array to be searched
 * @size: array size
 * @value: the value to find in array
 *
 * Return: value index or -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (rec_search(array, 0, size - 1, value));
}

/**
 * rec_search - recursive function
 * @array: array
 * @start: array start
 * @end: array end
 * @value: the sought after value
 *
 * Return: value index or -1
 */
int rec_search(int *array, size_t start, size_t end, int value)
{
	int mid;

	if (start <= end)
	{
		mid = (start + end) / 2;
		print_content(array, start, end);
		if (array[mid] < value)
			return (rec_search(array, mid + 1, end, value));
		else if (array[mid] > value || (mid > 0 && array[mid] == value
			 && array[mid - 1] == value))
			return (rec_search(array, start, mid, value));
		else if (array[mid] == value)
			return (mid);
	}
	return (-1);
}
/**
 * print_content - print array content
 * @array: array to print
 * @start: array beginning
 * @end: array end
 *
 * Return: void
 */
void print_content(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}
