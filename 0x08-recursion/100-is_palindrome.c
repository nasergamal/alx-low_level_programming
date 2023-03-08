#include <string.h>

int pal(char *s, int i, int n, int m);

/**
 * is_palindrome - all in the name
 * @s: string
 *
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int i = strlen(s), n = (i - 1) / 2, m = 0;

	if (i  == 0)
		return (1);
	return (pal(s, i, n, m));
}

/**
 * pal - complement is_palindrome func in determining if string s is palindrome
 * @s: string
 * @i: string s length
 * @n: lenth / 2
 * @m: counter
 *
 * Return: 0 or 1
 */

int pal(char *s, int i, int n, int m)
{
	if (s[m] != s[i - 1])
		return (0);
	if (s[m] == s[i - 1] && i > n)
	{
		m++;
		i--;
		return (pal(s, i, n, m));
	}
	return (1);
}
