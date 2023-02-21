#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - determine letters case
 * @c: the letter to be identified
 *
 * Description: find out the truth about the letter
 *
 * Return: true or false
 */

int _islower(int c)
{
int r;
if (islower(c))
r = 1;
else
r = 0;

return (r);
}
