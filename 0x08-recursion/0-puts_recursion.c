#include <stdio.h>

/**
 * _puts_recursion - a function similar to puts
 * @s: the string to be printed
 *
 * Description: takes a string and print it using recursion (puts equivalent)
 *
 * Return: the string followed by a new-line
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(++s);
}
