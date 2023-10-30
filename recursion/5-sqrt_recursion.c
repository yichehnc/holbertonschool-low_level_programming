#include "main.h"

/**
 * find_sqrt - A function that recursively gets
 * the natural square root of a number
 *
 * @n: number to be rooted
 * @i: square root
 *
 * Return: natural square root of n, or -1 if not exist
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - A function that returns the natural square root of n
 *
 * @n: number to be rooted
 *
 * Return: square root of n, or -1 if not exist.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 1));
}
