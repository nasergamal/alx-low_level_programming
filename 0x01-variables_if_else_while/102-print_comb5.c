#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: mix a hundred with a hundred!
 *
 * Return: 0 always (success)
 */

int main(void)
{
int m, n, b, v;

for (n = '0'; n <= '9'; n++)
{
for (b = '0'; b <= '9'; b++)
{

for (m = '0'; m <= '9'; m++)
{
for (v = '0'; v <= '9'; v++)
{
if ((n == m && b == v) || (n + b > m + v)
|| ((n + b < m + v) && (b > m) && (n < m)))
continue;

putchar(n);

putchar(b);

putchar(' ');

putchar(m);

putchar(v);

if (n == '9' && b == '8' && m == '9' && v == '9')
continue;

putchar(',');

putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
