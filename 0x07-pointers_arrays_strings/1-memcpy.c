

/**
 * _memcpy -  a function that copies memory area
 * @dest: the destination array
 * @src: the array to be copied
 * @n: the size to be copied
 *
 * Description: copy an n number of elements from src to dest
 *
 * Return: the changed dest array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
