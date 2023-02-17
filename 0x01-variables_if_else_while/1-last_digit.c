#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

int m;

m = n % 10;

if (m > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, m);

else if (m == 0)
printf("Last digit of %d is %d and is 0\n", n, m);

else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);

return (0);
}
