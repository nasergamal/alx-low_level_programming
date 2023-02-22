#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: fi
 *
 * Return: always 0
 */

int main(void)
{
unsigned long int x, y, z, x1, x2, y1, y2, z1, z2;
int s, n;
x = 1, y = 2, z = 2, s = 0, n = 100000000;

while (s < 45)
{
printf("%lu, %lu, ", x, y);
z = x + y;
x = z;
y += z;
s++;
}
x1 = x / n;
x2 = x % n;
y1 = y / n;
y2 = y % n;
z1 = z / n;
z2 = z % n;

while (s < 49)
{
printf(", %lu%lu", x1+ x2 / n, x2 % n);
printf(", %lu%lu", y1 + y2 / n, y2 % n);


z1 = x1 + y1;
z2 = x2 + y2;
x1 = z1;
x2 = z2;
y1 += z1;
y2 += z2;
s++;
}
putchar('\n');
return (0);
}
