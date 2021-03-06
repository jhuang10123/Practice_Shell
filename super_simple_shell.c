#include "holberton.h"
/**
 * main - prints "$ " prompt and executes command from stdin
 * Return: 0
 */
int main()
{
	char *buffer, *token, *argv[1024];
	size_t buf_size;
	pid_t child;
	unsigned int i;
	int status;

	printf("$ ");

	while (getline(&buffer, &buf_size, stdin) != -1)
	{
		token = strtok(buffer, " \n");

		for (i = 0; token != NULL; i++)
		{
			argv[i] = token;
			printf("argv[%d] = %s", i, argv[i]);
			token = strtok(NULL, " \n");
		}

		argv[i] = NULL;

		child = fork();
		if (child == -1)
		{
			perror("ERROR");
			return (1);
		}
		if (child == 0)
		{
			printf("child process before execve\n");
			execve(argv[0], argv, NULL);
			perror("Execve Error");
			return (1);
		}
		else
		{
			wait(&status);
		}
	}
	return (0);
}
