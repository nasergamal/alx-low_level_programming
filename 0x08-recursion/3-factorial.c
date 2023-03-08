
/**
 * factorial - takes an integer and get its factorial
 * @n: the integer in question
 *
 * Description: using recursion this function will calulate the factorial
 *
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
		n = n * (factorial(n - 1));
	return (n);
}
