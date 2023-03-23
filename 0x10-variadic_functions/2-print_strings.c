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
		if (s)
			printf("%s", s);
		else
                        printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}
