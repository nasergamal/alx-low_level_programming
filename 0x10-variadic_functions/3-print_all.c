#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print given data
 * @format: the formats to be printed
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int n = 0;

	char *s;

	va_list li;

	va_start(li, format);
	while (format[n] && format)
	{
		switch (format[n])
		{
		case 'c':
			printf("%c", va_arg(li, int));
			break;
		case 'i':
			printf("%d", va_arg(li, int));
			break;
		case 'f':
			printf("%f", va_arg(li, double));
			break;
		case 's':
			s = va_arg(li, char *);
			if (s == NULL)
			{
				printf("nil");
				break; }
			printf("%s", s);
			break; }
		while ((format[n] == 'c' || format[n] == 'i'
		|| format[n] == 'f' || format[n] == 's') && (format[n + 1]))
		{
			printf(", ");
			break;
		}
		n++;
	}
	printf("\n");
}
