
int prime(int n, int i);

/**
 * is_prime_number - takes an int and determine if it is prime number or not
 * @n: int
 *
 * Description: determine if int n is prime number
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int i = 3;

	return (prime(n, i));
}

/**
 * prime - complement is_prime_number func
 * @n: int
 * @i: int
 *
 * Return: result
 */

int prime(int n, int i)
{
	if (n % 2 == 0 || n <= 1 || (n > i && n % i == 0))
		return (0);
	if (i == n)
		return (0);
	return (prime(n, i += 2));
}
