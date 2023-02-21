#include <stdio.h>

/**
 * print_sign - detect negativity
 * @n: the number to be identified
 *
 * Description: find out the truth about numbers
 *
 * Return: numbers based on negativity
 */

int print_sign(int n)
{
int r;
char s;
if (n > 0)
{
s = '+';
r = 1;
}
else if (n < 0)
{
s = '-';
r = 1;
}
else
{
s = '0';
r = 0;
}
printf('%c', s);

return (r);
}
