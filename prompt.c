#include "holberton.h"
/**
 * main - prints "$ ", wait for user input & prints it on the next line.
 * Return: 0
 */
int main()
{
	char *buffer;
	size_t buf_size;
	int retval;

	buffer = malloc(sizeof(char) * buf_size);
	if (buffer == NULL)
		return (1);

/* write() */
	printf("$ ");

	retval = getline(&buffer, &buf_size, stdin);
	if (retval == -1)
		return (1);
/* reads from stream(stdin), stores in buffer of buf_size size.
 * if buf_len is null, getline will allocate mem. but user will need to free
 * return the number of characters read, including the delimiter character
 * but  not  including the terminating null byte ('\0')
 * returns -1 on failure, including EOF condition
 */


	printf("%s\n", buffer);
	return (0);

}
