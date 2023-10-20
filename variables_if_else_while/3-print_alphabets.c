#include <stdio.h>

/**
*main - prints the alphabet in uppercase then lowercase
*followed by a new line
*
*return: 0
*/

int main(void)
{
    char ch = 'a';
    char CH = 'A';

    while (ch <= 'z')
    {
          putchar(ch);
          ch = ch + 1;
    }
    while (CH <= 'Z')
    {
          putchar(CH);
          CH = CH + 1;
    }
    putchar('\n');
    return (0);
}
