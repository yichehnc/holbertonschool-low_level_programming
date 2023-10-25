#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 *
 * @a: int input a
 * @b: int input b
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
