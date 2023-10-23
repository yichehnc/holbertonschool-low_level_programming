#include "main.h"

/**
 * _isdigit - Checks for digits.
 *
 * @c: char input from user.
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
