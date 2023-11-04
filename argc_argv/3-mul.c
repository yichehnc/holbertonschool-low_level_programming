#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that multiplies two numbers together
 *
 * @argc: number of arguments in the command line
 * @argv: array of strings that contain
 * each of the commands in the command line
 *
 * Return: Returns the product
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1] * atoi(argv[2]));
	printf("%d\n", mul);
	return (0);
}
