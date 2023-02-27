#include <stdio.h>
#include <string.h>

/**
 * puts_half - divide the string
 * @s: the string to be divided
 *
 * Description: takes a string and print the 2nd half of it
 *
 * Return: nothing
 */

void puts_half(char *str s)
{
	int i, n = strlen(s);

	if (n % 2 == 0)
	{
		for (i = strlen(s) / 2; i < n; i++)
			printf("%c", s[i]);
	}
	else
	{
		for (i = strlen(s) / 2; i <= n; i++)
			printf("%c", s[i]);
	_putchar('\n');
}
