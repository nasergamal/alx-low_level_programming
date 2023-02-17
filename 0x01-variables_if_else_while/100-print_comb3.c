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
int n;

for (n = '0'; n <= '9'; n++)
{
putchar(n);

if (n == '9')
continue;

putchar(',');

putchar(' ');

}
putchar('\n');

return (0);
}
naser@Naser:~/p/C_bett/1$ vi 10.c
naser@Naser:~/p/C_bett/1$ gcc 10.c -o hh
naser@Naser:~/p/C_bett/1$ ./
-bash: ./: Is a directory
naser@Naser:~/p/C_bett/1$ ./hh
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89,
naser@Naser:~/p/C_bett/1$ cat 10.c
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
int m, n;

for (n = '0'; n <= '9'; n++)
{
for (m = '0'; m <= '9'; m++)
{
if (n == m || n > m)
continue;

putchar(n);

putchar(m);

putchar(',');

putchar(' ');
}
}
putchar('\n');

return (0);
}
