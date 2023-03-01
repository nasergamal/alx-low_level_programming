
/**
 * reverse_array - takes an array to revers it
 * @a: the array to be reversed
 * @n: array size
 *
 * Description: array reverser
 *
 * Return: new array
 */

void reverse_array(int *a, int n)
{
	int m, i;

	n = n - 1;
	for (i = 0; i < n; i++)
	{
		m = a[n];
		a[n] = a[i];
		a[i] = m;
		n--;
	}
}
