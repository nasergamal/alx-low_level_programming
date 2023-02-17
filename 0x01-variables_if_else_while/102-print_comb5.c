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

for (n = 0; n <= 98; n++)
{
b = n % 10;
for (m = n + 1; m <= 99; m++)
{
v = m % 10;
putchar(n / 10 + '0');

putchar (b + '0');

putchar(' ');

putchar(m / 10 + '0');

putchar (v + '0');

if (n == 98 &&  m == 99)
continue;

putchar(',');

putchar(' ');
}
}
putchar('\n');

return (0);
}
