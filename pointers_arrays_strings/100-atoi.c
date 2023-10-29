#include "main.h"

/**
 * _atoi - A function that converts a string to an integer.
 *
 * @s: string input to be converted
 *
 * Return: sign * n.
*/
int _atoi(char *s)
{
	int i = 0; /* array position */
	int n = 0; /* current number without sign */
	int sign = 1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		i = i + 1;
	}
	if (s[i] != '\0')
	{
		while (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
			i = i + 1;
		}
	}
	return (sign * n);
}
