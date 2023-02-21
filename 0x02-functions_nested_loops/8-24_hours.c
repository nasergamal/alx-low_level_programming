#include <stdio.h>

/**
 * jack_bauer - total spy
 *
 * Description: count every minute
 *
 * return: a day of work
 */

void jack_bauer(void)
{
int n, i, m, v;
for (n = 0; n <= 23; n++)
{
for (i = 0; i <= 59; i++)
{
m = n % 10;

v = i % 10;

putchar(n / 10 + '0');

putchar(m + '0');

putchar(':');

putchar(i / 10 + '0');

putchar(v + '0');

putchar('\n');
}
}
}
