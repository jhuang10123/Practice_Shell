#include "holberton.h"
/**
 * main - prints "$ ", wait for user input & prints it on the next line.
 * Return: 0
 */
int main()
{
	char *buffer;
	size_t buf_size;

	buf_size = 80;

	buffer = malloc(sizeof(char) * buf_size);
	if (buffer == NULL)
		return (1);

	printf("$ ");

	getline(&buffer, &buf_size, stdin);

	printf("%s\n", buffer);
	return (0);

}
