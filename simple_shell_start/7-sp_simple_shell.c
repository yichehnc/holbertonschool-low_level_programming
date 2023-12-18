#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	char *buffer = NULL;
	size_t buffer_size = 0;
	char *token;
	int i = 0;
	char **array;
	pid_t child_pid;
	int status;

	while (1)
	{
		write(1, "#Shell$ ", 9);
		getline(&buffer, &buffer_size, stdin);
		token = strtok(buffer, "\t\n");
		array = malloc(sizeof(char *) * 1024);

		while (token)
		{
			array[i] = token;
			token = strtok(NULL, "\t\n");
			i++;
		}
		array[i] = NULL;
		child_pid = fork();

		if (child_pid == 0)
		{
			if (execve(array[0], array, NULL) == -1)
				perror("Error with the exec");
		}
		else
			wait(&status);
	}
}
