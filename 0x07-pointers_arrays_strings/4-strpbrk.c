
/**
 * _strpbrk - locates the first occurrence in the string s to any in accept
 * @s: the string to be checked
 * @accept: list of character to check for in the string
 *
 * Description: look for matches and gives a pointer to first match in string s
 *
 *
 * Return: pointer to first occurrence in s that matches any in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}
	return (NULL);
}
