
/**
 * leet - l33t, 0n1y f0r l33t
 * @s: 7h3 s7ring
 * Description: c4ng3 s7rings l3773rs wi7h numb3rs
 *
 * Return: secret
 */

char *leet(char *s)
{
	char a[] = {'a', 'e', 'o', 't', 'l'};

	char b[] = {'A', 'E', 'O', 'T', 'L'};

	int i, n, c[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n < 5; n++)
		{
			if (s[i] == a[n] || s[i] == b[n])
			{
				s[i] = c[n];
				break;
			}
		}
	}
	return (s);
}
