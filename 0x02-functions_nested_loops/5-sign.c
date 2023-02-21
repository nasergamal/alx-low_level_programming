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

if (n > 0)
{
putchar('+');
r = 1;
}
else if (n < 0)
{
putchar('-');
r = 1;
}
else
{
putchar('0');
r = 0;
}
return (r);
}
