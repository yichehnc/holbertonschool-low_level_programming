#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_digit - A function that checks whether array is of digit entry
 *
 * @s: input string
 *
 * Return: 0 if it is a digit or 1 in other char
 */
int check_digit(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		if (isdigit(s[j]) != 0)
		{
		j = j + 1;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Adds all positive integers
 *
 * @argc: number of arguments in the command line
 * @argv: array of strings that contain
 * each of the commands in the command line
 *
 * Return: Returns the sum
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	sum = 0;
	while (argv[i])
	{
		if (check_digit(argv[i]) == 1)
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i = i + 1;
	}
	printf("%d\n", sum);
	return (0);
}
