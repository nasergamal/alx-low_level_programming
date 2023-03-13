#include <stdlib.h>
#include <stdio.h>

int len(char *c);

/**
 * argstostr - concatenate any number of strings and return pointer to mem loc
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to memory
 */


char *argstostr(int ac, char **av)
{
	int i, n = 0, m, v = 0;

	char *s, *b;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		n += len(av[i]);
	s = malloc((n + ac + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		b = av[i];
		for (m = 0; b[m] != '\0'; m++)
			s[m + v] = b[m];
		s[m + v] = '\n';
		v += m + 1;
	}
	s[m + v] = '\0'
	return (s);
}

/**
 * len - measure string length
 * @c: the string
 *
 * Return: length
 */

int len(char *c)
{
	int a;

	for (a = 0; c[a] != '\0'; a++)
		;
	return (a);
}
