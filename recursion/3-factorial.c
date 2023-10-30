#include "main.h"

/**
 * factorial - A function that calcualtes the factorial n.
 *
 * @n: pointer to integer
 *
 * Return: the factorial of n, or -1 if n < 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
