
/**
 * _strncat - concatenates two strings with limits
 * @dest: the first string
 * @src: 2nd string
 * @n: number of bytes to be taken from src
 * Description: takes two strings and cocatenates them
 *
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, a = 0;

	for (i = 0; dest[i] != '\0')
	;
	while (src[a] != '\0' && a < n)
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	return (dest)
}
