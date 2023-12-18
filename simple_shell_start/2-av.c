#include <stdio.h>
#include <stdlib.h>
/**
 * main - prototype
 * @ac:argument number
 * @av:argument value
 * Return: 0
 */
int main(int ac, char **av)
{
	int i = 0;

	while (av[i] != NULL)
	{
		printf("%s", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
