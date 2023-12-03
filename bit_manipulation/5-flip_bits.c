#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get
 * from one number to another
 *
 * @n: Input number
 * @m: Input number
 *
 * Return: Returns the number of bits, else NULL
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned long int flip;

	i = 0;
	flip = (n ^ m);

	while (flip > 0)
	{
		i = i + 1;
		flip = flip & (flip - 1);
	}
	return (i);
}
