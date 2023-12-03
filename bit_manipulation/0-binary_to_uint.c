#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Converts binary number to an unsigned int
 *
 * @b: Binary number
 *
 * Return: Returns an unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	i = 0;
	num = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else if (b[i] == '0')
		{
			num <<= 1;
		}
		else if (b[i] == '1')
		{
			num = (num << 1) | 1;
		}
		i = i + 1;
	}
	return (num);
}
