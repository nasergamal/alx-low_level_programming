#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: keygen
 *
 * Return: password
 */

int main(void)
{
        int i, n, m[100];

        /*time_t t;*/
        srand(time(NULL));

        for( i = 0 ; i < 100 ; i++)
        {
		m[i] = rand() % 84;
		n += m[i];
                printf("%d\n", n);
        }

        return (0);
}
