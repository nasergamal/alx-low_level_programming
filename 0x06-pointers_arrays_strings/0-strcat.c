

/**
 * _strcat - concatenates two strings
 * @dest: the first string
 * @src: 2nd string
 *
 * Description: takes two strings and cocatenates them
 *
 * Return: new string
 */

char *_strcat(char *dest, char *src)
{
	int i, a = 0;

	for (i = 0; dest[i] != '\0')
	;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	return (dest)
}
