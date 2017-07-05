#include "holberton.h"
/**
 * _getppid - prints the PID of the parent process.
 * Return: 0
 */
int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("pid = %u\n", ppid);
	return (0);

}
