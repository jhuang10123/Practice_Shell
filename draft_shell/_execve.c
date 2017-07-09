#include "holberton.h"
int main(void)
{
	pid_t child_pid;
	int status;
	unsigned int i;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	for (i = 0; i <= 4; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			execve("/bin/ls", argv, NULL);
			printf("Error in execve\n");
		}
		else
		{
			wait(&status);
		}
	}
	return (0);
}
