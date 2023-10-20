#include <stdio.h>

/**
 * main - prints all single digit number of base 10 starting from 0
 * followed by a new line
 *
 * return: 0
 */

int main(void)
{
        int i = 0;

        while (i < 10)
        {
            printf("%d", i);
            i = i + 1;
        }
        printf("\n");
        retrun (0);
}
