#include <stdio.h>

/** 
 * main - prints all possible single digit combinations
 * 
 * return: 0
 */

int main(void)
{
        int i = 0;

        while (i < 10)
        {
                putchar('0' + i);
                if (i < 9)
                {
                      putchar(',');
                      putchar(' ');
                }
                i = i + 1;
        }
        putchar('\n');
        return (0);
}
