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
	int get_ret, ret_val, status;

	printf("$ ");

	get_ret = getline(&buffer, &buf_size, stdin);
	if (get_ret == -1)
		return (1);

	token = strtok(buffer, " ");

	for (i = 0; token != NULL; i++)
	{
		argv[i] = token;
		printf(" token = %s\n", token)
		token = strtok(NULL, " ");

	}

	child = fork();
	if (child == -1)
	{
		perror("ERROR");
		return (1);
	}
	if (child == 0)
	{
/* need fix. output -> no such file */
		ret_val = execve(argv[0], argv, NULL);
		if (ret_val == -1)
		{
			perror("Error");
			return (1);
		}
		printf("execve error\n");
	}
	else
	{
		wait(&status);
	}
	return (0);
}
