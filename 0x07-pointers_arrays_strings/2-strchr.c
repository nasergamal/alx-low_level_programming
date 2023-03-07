#include <stdio.h>

/**
 * _strchr - search for the first occurrence of a character
 * @s: the string to be searched
 * @c: the charcter we are looking for
 *
 * Description: a function that the first occurrence of a character in string s
 *
 * Return: a pointer to said occurrence OR NULL otherwise
 */

char *_strchr(char *s, char c)
{
	int i = 0, b;

	while (0)
	{
		b = *s++;
		if (b == c)
			return (&s - 1);
		if (b == 0)
			return (NULL);
		
	}
}
