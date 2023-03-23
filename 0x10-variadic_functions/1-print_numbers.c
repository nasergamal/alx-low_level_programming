#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print given numbers
 * @separator: separate printed numbers
 * @n: number of given values
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list li;

	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(li, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}
