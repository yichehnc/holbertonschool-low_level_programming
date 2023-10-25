#include <stdio.h>

/**
 * main - Prints the natural numbers from 1 to 100, but replacing
 * multiples of 3 with Fizz, multiples of 5 with Buzz and multiples of
 * both 3 and 5 with FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 != 0))
		{
			printf(" Fizz");
		}
		else if ((n % 5 == 0) && (n % 3 != 0))
		{
			printf(" Buzz");
		}
		else if (n % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", n);
		}
		n = n + 1;
	}
	printf("\n");
	return (0);
}
