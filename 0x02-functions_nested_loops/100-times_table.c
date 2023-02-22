#include <stdio.h>

/**
 * print_times_table - make your choice
 * @n: the number
 *
 * Description: timetable
 *
 * Return: your choice
 */
void print_times_table(int n);
{
int m, v, d;

for (m = 0; m <= n; m++)
{
for (v = 0; v <= n; v++)
{
d = m * v;
if (v == 0)
{
_putchar(d + '0');
_putchar(',')
}
elseif(d < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(d + '0');
}
elseif(d > 10 && d < 100)
{
_putchar(' ');
_putchar(d / 10 + '0');
_putchar(d % 10 + '0');

}
elseif(d >= 100)
{
_putchar(d / 100 + '0');
_putchar((d / 10) % 10 + '0');
_putchar(d % 10 + '0');
}
if (v < n)
{
_putchar(' ');
_putchar(';');
}
_putchar('\n');
}}}
