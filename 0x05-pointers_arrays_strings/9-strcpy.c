#include <stdio.h>
#include <string.h>

/**
 * _strcpy - takes two argument to overwrite the 1st with the 2nd
 * @dest: the empty string
 * @src: the string to copy into the empty string
 *
 * Description: takes to chars and copy the 2nd into the first
 *
 * Return: the new string
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
return (dest);
}
