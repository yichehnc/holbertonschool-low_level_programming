#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
void check_command(char *command)
{
	if (access(command, F_OK == 0))
		printf("%s: Found\n", command);
	else
		printf("%s: File doesn't exist\n", command);
}

int main(void)
{
	char *buffer = NULL;
	size_t buffer_size = 0;
	char *token;

	while (1)
	{
		write(1, "hello", 5);
		getline(&buffer, &buffer_size, stdin);
		token = strtok(buffer, "\t\n");

		while (token != NULL)
		{
			printf("Token: %s\n", token);
	/* Check if token corresponds to an existing file*/
			check_command(token);
	/* Get the next token*/
			token = strtok(NULL, "\t\n");
		}

	}
	free(buffer);

	return (0);
}