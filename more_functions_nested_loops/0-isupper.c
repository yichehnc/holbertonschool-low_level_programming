#include "main.h"

/**
 * _isupper - Function that checks for uppercase character.
 *
 * @c: char input from user.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
