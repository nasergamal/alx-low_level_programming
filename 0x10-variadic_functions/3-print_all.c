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
	int i, n = 0;

	char c, *s;

	float f;

	va_list li;

	va_start(li, format);
	while (format[n])
	{
		switch (format[n])
		{
		case 'c':
			c = (char) va_arg(li, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(li, int);
			printf("%d", i);
			break;
		case 'f':
			f = (float) va_arg(li, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(li, char *);
			if (s == NULL)
			{
				printf("nil");
				break; }
			printf("%s", s);
			break;
		}
		if ((format[n] == 'c' || format[n] == 'i'
		|| format[n] == 'f' || format[n] == 's') && (format[n + 1]))
			printf(" ");
		n++;
	}
	printf("\n");
}
