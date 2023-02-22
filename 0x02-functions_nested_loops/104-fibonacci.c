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
long long int x, y, z;
int s;
x = 1, y = 2, z = 2, s = 0;

while (s < 49)
{
if (s < 48)
printf("%llu, %llu, ", x, y);

else 
printf("%llu, %llu\n", x, y);

z = x + y;
x = z;
y += z;

s++;
}
return (0);
}
