#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print given data
 * @format: the formats to be printed
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list li;
	unsigned int i, n = 0, flag = 0;
	char *s, fr[] = "csif";

	va_start(li, format);
	while (format && format[n])
	{
		i = 0;
		while (fr[i])
		{
			if (fr[i] == format[n] && flag)
			{
				printf(", ");
				break; }
			i++;
		}
		switch (format[n])
		{
		case 'c':
			printf("%c", va_arg(li, int)), flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(li, int)), flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(li, double)), flag = 1;
			break;
		case 's':
			s = va_arg(li, char *), flag = 1;
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break; }
		n++;
	}
	printf("\n");
	va_end(li);
}
