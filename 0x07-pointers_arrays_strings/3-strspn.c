
/**
 * _strspn - length of inital part of string s that consist of accept only
 * @s: the string to be checked
 * @accept: list of character to check for in the string
 *
 * Description: count the number of charcters matching accept in string s
 *
 *
 * Return: the number of matches
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0, m = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				n++;
		}
		if (n == m)
			return (n);
		m++
	}
}
