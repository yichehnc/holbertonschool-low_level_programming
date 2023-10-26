#include "main.h"

/**
 * reverse_array - A function that reverses an array.
 *
 * @a: array input integer
 * @n: array input integer
 *
 * Return: 0.
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i; /* the start of the array */

	i = 0;

	while (i < n - 1)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - 1);
		*(a + n - 1) = tmp;
		i = i + 1;
		n = n - 1;
	}

}
