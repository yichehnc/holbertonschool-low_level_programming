#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 *
 * @argc: number of arguments in the command line
 * @argv: array of strings that contain
 * each of the commands in the command line
 *
 * Return: Prints the arguments
 */
int main(int argc, char *argc[])
{
	int i;

	i = 0;
	while (argv[i] != argc[argc])
	{
		printf("%s\n", argv[i]);
		i = i + 1;
	}
	return (0);
}
