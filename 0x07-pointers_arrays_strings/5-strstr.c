#include <stddef.h>

/**
 * _strstr - locates the first occurrence in the string s to any in accept
 * @haystack: the string to be checked
 * @needle: list of character to check for in the string
 *
 * Description: look for matches and gives a pointer to start of of substring
 *
 *
 * Return: pointer to first occurrence in s that matches any in accept, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, m = 0, n = 0, c = 0;

	for (i = 0;; i++)
	{
		for (; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[j + i])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
		if (haystack[i] == '\0')
			return (NULL);
	}
}
