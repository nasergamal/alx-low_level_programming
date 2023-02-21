#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - determine the real alpha
 * @c: the letter to be identified
 *
 * Description: find out the truth about the character
 *
 * Return: true or false
 */

int _isalpha(int c)
{
int r;

if (isalpha(c))
r = 1;

else
r = 0;

return (r);
}
