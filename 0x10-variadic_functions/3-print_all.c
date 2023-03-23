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
	char *s, *se = "";
	va_list li;

	va_start(li, format);
	while (format[n] && format)
	{
		switch (format[n])
		{
		case 'c':
			printf("%s%c", se, va_arg(li, int));
			break;
		case 'i':
			printf("%s%d", se, va_arg(li, int));
			break;
		case 'f':
			printf("%s%f", se, va_arg(li, double));
			break;
		case 's':
			s = va_arg(li, char *);
			if (!s)
			{
				printf("(nil)");
				break; }
			printf("%s%s", se, s);
			break;
		}
		n++;
		se = ", ";
	}
	printf("\n");
	va_end(li);
}
