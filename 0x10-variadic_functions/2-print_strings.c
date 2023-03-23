#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print given strings
 * @separator: separate printed strings
 * @n: numbers of strings to be printed
 *
 * Return: nothin
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *s;

	va_list li;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(li, char *);
		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);
		if (i == n - 1)
			break;
		if (separator != NULL)
			printf("%c ", separator[0]);
		else
			printf(" ");
	}
	printf("\n");
}
