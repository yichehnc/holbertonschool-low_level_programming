#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * get_bit - Finds the value of the bit at a given index
 *
 * @n: Input number
 * @index: Bit position
 *
 * Return: Value of bit at index, else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	bit = (n >> index) & 1;

	return (bit);
}
