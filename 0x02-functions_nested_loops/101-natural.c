#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: sum all 3 or 5 divisable numbers
 *
 * Return: that sum
 */

int main(void)
{
int i, s;

i = 0, s = 0;

while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0)
s += i;
}
printf("%d", s);
return (0);
}
