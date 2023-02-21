#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - just add thing
 * @n: the start of the count
 *
 * Description: just counting
 *
 * Return: count to ninty eight
 */

void print_to_98(int n)
{
int v;
if (n < 98)
{
for (; n < 98; n++)
{
if (n > 10 && n < -10)
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');
}
else
{
putchar(n + '0');
}}}
else if (n > 98)
{
for (; n > 98; n--)
{
if (n >= 100)
{
v = n % 10;
n = n / 10;
putchar(n / 10 + '0');
putchar(n % 10 + '0');
putchar(v + '0');
}
else if (n < 100 && n > 98)
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');
}
putchar(',');
putchar(' ');
}
if (n == 98)
putchar(n / 10);
putchar(n % 10);
putchar('\n');
}
}
