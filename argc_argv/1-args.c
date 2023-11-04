#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints the number of arguments pass onto it
 *
 * @argc: number of arguments in the command line
 * @argv: array of strings that contain
 * each of the commands in the command line
 *
 * Return: the number of arguments
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
