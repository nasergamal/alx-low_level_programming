#include <stdlib.h>
#include <stdio.h>
unsigned int len(char *b);

/**
 * string_nconcat - concacenate two strings up to n number if characters of s2
 * @s1: 1st string
 * @s2: 2nd string
 * @n: the number of characters from s2
 *
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int i, c = 0, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	m = (n <= len(s2)) ? n : len(s2);
	s = malloc((len(s1) + m + 1) * sizeof(char));
	if (s == NULL)
		return (s);
	for (i = 0; i < len(s1); i++)
		s[i] = s1[i];
	for (c = 0; c < m; c++)
		s[i + c] = s2[c];
	s[i + c] = '\0';
	return (s);
}

/**
 * len - measure string length
 * @b: string
 *
 * Return: length
 */

unsigned int len(char *b)
{
	int l;

	for (l = 0; b[l] != '\0'; l++)
		;
	return (l);
}
