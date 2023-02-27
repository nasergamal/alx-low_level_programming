#include <stdio.h>
#include <string.h>

/**
 * puts2 - takes a string
 * @str: string in question
 *
 * Description: takes every other character out
 *
 * Return: the remaining value
 */

void puts2(char *str)
{
	int i, n = strlen(str);

	for (i = 0; i < n; i += 2)
		printf("%c", str[i]);
	putchar('\n');
}
