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
int x, y, z, s;

x = 1, y = 2, z = 2, s = 0;

while (s < 24)
{
if (s < 23)
printf("%d, %d, ", x, y);

else 
printf("%d, %d\n", x, y);

z = x + y;
x = z;
y += z;

s++;
}
return (0);
}
