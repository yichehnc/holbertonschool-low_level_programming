#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Writing a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 *
 * @a: array of input int
 * @size: size of the square array
 *
 * Return: the sum of two diagonals of a square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1;
	int diag2;

	i = 0;
	diag1 = 0;
	diag2 = 0;
	while (i < size)
	{
		diag1 = diag1 + a[i];
		a = a + size;
		i = i + 1;
	}
	a = a - size;
	i = 0;
	while (i < size)
	{
		diag2 = diag2 + a[i];
		a = a - size;
		i = i + 1;
	}
	printf("%d, %d\n", diag1, diag2);
}
