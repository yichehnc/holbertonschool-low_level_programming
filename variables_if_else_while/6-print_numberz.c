#include <stdio.h>

/**
 * main - prints all single digit number of base 10 from 0
 * as a character, followed by a new line
 * return: 0
*/

int main(void)
{
        int i = 0;

        while (i < 10)
        {
              putchar('0' + i);
              i = i + 1;
        }
        putchar('\n');
        return (0);
}
