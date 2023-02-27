#include <stdio.h>
#include <string.h>

/**
 * rev_string - takes a variable
 * @s: the string in question
 *
 * Description: take a string then print it in reverse
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	char n;
	int m = strlen(s) - 1, i = 0;

	for (; m > i; m--)
	{
		n = s[m];
		s[m] = s[i];
		s[i] = n;
		i++;
	}
}
