#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: aaand the first digit isss
 *
 * Return: 0 always (success)
 */

int main(void)
{
char n, m;

for (n = '0'; n <= '9'; n++)
putchar(n);

for (m = 'a'; m <= 'f'; m++)
putchar(m);

putchar('\n');

return (0);
}
