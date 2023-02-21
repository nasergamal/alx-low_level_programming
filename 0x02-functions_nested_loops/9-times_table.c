#include <stdio.h>

/**
 * times_table - print the time table
 *
 * Description: learn how to multiply, boy.
 *
 * Return: a whole time table for your perusal
 */

void times_table(void)
{
int n, m, d, b;

for (n = 0; n <= 9; n++)
{
for (m = 0; m <= 9; m++)
{
d = n * m;

b = d % 10;

if (m == 0)
{
putchar(d + '0');
}

else if (d < 10)
{
putchar(' ');
putchar(' ');
putchar(d + '0');
}
else if (d >= 10)
{
putchar(' ');
putchar(d / 10 + '0');
putchar(b + '0');
}
if (m != 9)
{
putchar(',');
}
else
putchar('\n');
}
}
}
