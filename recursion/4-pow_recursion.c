#include "main.h"

/**
 * _pow_recursion - A function that returns x to the power of y.
 *
 * @x: base
 * @y: index
 *
 * Return: The value of x to the power of y, or returns -1 if y < 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}
