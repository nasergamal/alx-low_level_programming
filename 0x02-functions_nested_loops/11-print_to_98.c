#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - just add thing
 * @n: the start of the count
 *
 * Description: just counting
 *
 * Return: count to ninty eight
 */

void print_to_98(int n)
{int m, v;
if (n < 98)
{for (; n <= 98; n++)
if (n < 0)
{m = abs(n);
_putchar('-'); }
if (n >= 10 || n <= -10)
{putchar(m / 10 + '0');
putchar(m % 10 + '0');
if (n == 98)
{_putchar('\n');
continue; }
putchar(',');
putchar(' '); }
else
{_putchar(m + '0');
_putchar(',');
_putchar(' '); }}
else if (n > 98)
{for (; n > 98; n--)
{if (n >= 100)
{v = n % 10;
m = n / 10;
_putchar(n / 100 + '0');
_putchar(m % 10 + '0');
_putchar(v + '0');
_putchar(',');
_putchar(' '); }
else if (n < 100 || n >= 98)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
if (n == 98)
_putchar('\n');
continue; }}}}}
