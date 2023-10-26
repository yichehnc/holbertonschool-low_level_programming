#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int ch;
	int i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch = ch + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
