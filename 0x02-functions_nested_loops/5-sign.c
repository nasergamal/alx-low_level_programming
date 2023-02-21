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
r = 1
putchar('+');
}
else if (n < 0)
{
r = 1;
putchar('-');
}
else
{
r = 0;
putchar('0');
}
return (r);
}
