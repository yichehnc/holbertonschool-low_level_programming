#include "main.h"

/** 
 * print_alphabet - prints the alphabet in lowercase
 * 
 * return: 0
 */
void print_alphabet(void)
{
        int ch = 'a';

        while (ch <= 'z')
        {
              _putchar(ch);
              ch = ch + 1;
        }
        _putchar('\n');
}
