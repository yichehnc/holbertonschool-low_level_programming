#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n elements of an array of integers.
 *
 * @a: string input
 * @n: int input
 *
 * Return: length of string.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
		i = i + 1;
	}
	printf("\n");
}
