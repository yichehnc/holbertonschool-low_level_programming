#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

extern char **environ;

int main(void)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s", environ[i]);
		i++;
	}
}