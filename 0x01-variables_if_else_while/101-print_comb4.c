#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: mix 99 but not 99
 *
 * Return: 0 always (success)
 */

int main(void)
{
int m, n, b;

for (n = '0'; n <= '9'; n++)
{
for (m = '0'; m <= '9'; m++)
{
if (n == m || n > m)
continue;

for (b = '0'; b <= '9'; b++)
{
if (n == b || m == b || n > b || m > b)
continue;

putchar(n);

putchar(m);

putchar(b);

putchar(',');

putchar(' ');
}
}
}
putchar('\n');

return (0);
}
