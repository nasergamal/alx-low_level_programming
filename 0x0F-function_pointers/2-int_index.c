/**
 * int_index - searches for first occurence of an integer.
 * @array: the array to search
 * @size: array size
 * @cmp: the funtion for comparison
 *
 * Return: first occurnce index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
