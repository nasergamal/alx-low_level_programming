#include "search_algos.h"

void print_content(int *array, size_t start, size_t end);
/**
 * binary_search - binary search algorithm
 * @array: array to be searched
 * @size: array size
 * @value: the value to find in array
 *
 * Return: value index or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid;

	if (!array || size == 0)
		return (-1);
	for (start = 0, end = size - 1; start <= end; )
	{
		mid = (start + end) / 2;
		print_content(array, start, end);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
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
