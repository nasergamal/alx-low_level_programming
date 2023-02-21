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
r = '1';
s = '+';
}
else if (n < 0)
{
r = '1';
s = '-';
}
else
{
r = '0';
s = '0';
}
return (s + r);
}
