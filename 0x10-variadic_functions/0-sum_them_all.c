#include <stdarg.h>

/**
 * sum_them_all - sum given values
 * @n: number of values given
 *
 * Return: sum of values
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list li;

	va_start(li, n);
	for (i = 0; i < n; i++)
		sum += va_arg(li, int);
	return (sum);
}
