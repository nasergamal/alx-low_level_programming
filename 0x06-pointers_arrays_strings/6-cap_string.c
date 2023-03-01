/**
 * cap_string - capitalize a string
 * @s: the string
 *
 * Description: capitalize words following certain character
 *
 * Return: the new string
 */

char *cap_string(char *s)
{
	int i, n;

	char m[] = {"\n \t,;.!?\"(){}"}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; m[n] != '\0'; n++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				if (s[i - 1] == m[n])
					s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
