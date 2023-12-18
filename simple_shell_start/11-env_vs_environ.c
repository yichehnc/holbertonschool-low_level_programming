#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main(int ac, char **av, char **env)
{
	printf("%p\n %p\n", environ, env);
	return (0);
}