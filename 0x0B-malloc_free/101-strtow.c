#include <stdio.h>
#include <stdlib.h>
int len(char *c);
int cnt(char *d);

/**
 * strtow - create an array of words from string
 * @str: string
 *
 * Return: pointer to array
 */

char **strtow(char *str)
{
	int i, c = 0, n = cnt(str), m = 0, wo = 0;

	char **s;

	if (n == 0)
		return (NULL);

	s = malloc((n + 1) * sizeof(char *));
	if (*s == NULL)
		return (s);
	for (i = 0; i < len(str); i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
			wo++;
		if ((str[i] == ' ' || str[i] == '\0') && (str[i - 1] != ' '))
		{
			s[c] = malloc((wo) * sizeof(char));
			for (m = 0; m < wo; m++)
				s[c][m] = str[i - wo + m];
			c++;
			wo = 0;
		}
	}
	return (s);
}
/**
 * len - measure string length
 * @c: string
 *
 * Return: length
 */

int len(char *c)
{
	int a = 0;

	if (c != NULL)
	{
		for (a = 0; c[a] != '\0' ; a++)
			;
	}
	return (a);
}

/**
 * cnt - measure word count in string
 * @d: string
 *
 * Return: count
 */

int cnt(char *d)
{
	int a, w = 0;

	for (a = 0; a < len(d); a++)
	{
		if ((d[a] == ' ' || d[a] == '\0') && (d[a - 1] != ' ' && a))
			w++;
	}
	return (w);
}

