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
        int i;

        time_t t;
        srand((unsigned) time(&t));

        for( i = 0 ; i < 100 ; i++ )
        {
                printf("%d\n", rand());
        }

        return (0);
}
