
/**
 * _strncpy - copy strings to another
 * @dest: copy destination
 * @src: to be copied
 * @n: number of bytes
 *
 * Description: copy strings up to selected number of bytes to another
 *
 * Return: the new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && src[i] != '\0'); i++)
		dest[i] = src[i];
	for (; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
