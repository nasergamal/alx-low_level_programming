#include <stdio.h>
#include "main.h"

/**
 * print_times_table - make your choice
 * @n: the number
 *
 * Description: timetable
 *
 * Return: your choice
 */
void print_times_table(int n)
{
int m, v, d;
if (n > 15 || n < 0)
return;

for (m = 0; m <= n; m++)
{
for (v = 0; v <= n; v++)
{
d = m * v;
if (v == 0)
{
_putchar(d + '0'); }
else if (d < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(d + '0'); }
else if (d >= 10 && d < 100)
{
_putchar(' ');
_putchar(d / 10 + '0');
_putchar(d % 10 + '0');
}
else if (d >= 100)
{
_putchar(d / 100 + '0');
_putchar((d / 10) % 10 + '0');
_putchar(d % 10 + '0');
}
if (v < n)
{
_putchar(',');
_putchar(' ');
}
else
_putchar('\n');
}}}
