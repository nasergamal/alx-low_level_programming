
int sqt(int n, int i);

/**
 * _sqrt_recursion - gets square root of an integer
 * @n: integer to be returned to its square root
 *
 * Description: a function that return an integer n to its natural square root
 *
 * Return: the result
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	return (sqt(n, i));
}

/**
 * sqt - get the root
 * @n: int to be returned to its square root
 * @i: integer used to find root
 *
 * Description: this function work in tandem with _sqrt_recursion to get n root
 *
 * Return: result
 */

int sqt(int n, int i)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (i * i == n)
		return (i);
	if (i >= n)
		return (-1);
	return (sqt(n, i += 1));
}
