#include "main.h"

/**
 * prime_find - A function interates to find whether a number is prime number.
 *
 * @i: increment through 2 to n
 * @n: integer to be evaluated
 *
 * Return: 1 if found prime number, 0 if not.
 */
int prime_find(int i, int n)
{
	if (n < 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (prime_find(i + 1, n));
}

/**
 * is_prime_number - A function that find whether a number is prime number.
 *
 * @n: input integer base
 *
 * Return: 1 if found prime number, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_find(2, n));
}
