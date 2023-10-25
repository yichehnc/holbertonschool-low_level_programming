#include "main.h"

/**
 * rev_string - Sets two pointers at the start and end of the string.
 *
 * @s: the string reversed
 *
 * Return: s.
 */
void rev_string(char *s)
{
	char ch, *p, *q;

	q = s;
	while (*q != '\0')
		q = q + 1;

	if (q > s)
	{
		q = q - 1;
	}

	p = s;
	while (p < q)
	{
		ch = *p;
		*p = *q;
		*q = ch;
		p = p + 1;
		q = q - 1;
	}
}
