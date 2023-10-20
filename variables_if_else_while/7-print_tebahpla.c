#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and reverse
 * followed by a new line
 *
 * return: 0
 */

 int main(void)
 {
        char ch = 'z';

        while (ch >= 'a')
        {
                putchar(ch);
                ch = ch - 1; 
        }
        putchar('\n');
        return (0);
 }
