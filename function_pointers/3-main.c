#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Main function
 *
 * @argc: Number of arguments in the command line
 * @argv: Array of strings containing arguments on command line
 *
 * Return: Returns the operator
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);

	return (0);
}
