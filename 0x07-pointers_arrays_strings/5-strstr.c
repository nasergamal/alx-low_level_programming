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
	int i, j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if ( haystack[i] == needle[j])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i + j])
					break;
		}
		if (!needle[j])
			return (&haystack[i]);
		}
	}
	return (NULL);
}
