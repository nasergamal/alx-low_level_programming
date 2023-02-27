#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - divide the string
 * @str: the string to be divided
 *
 * Description: takes a string and print the 2nd half of it
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, n = strlen(str);

	if (n % 2 == 0)
	{
		for (i = (strlen(str) + 1) / 2; i < n; i++)
			printf("%c", str[i]);
	}
	else
	{
		for (i = (strlen(str) + 1) / 2; i < n; i++)
			printf("%c", str[i]);
	}
	putchar('\n');
}
