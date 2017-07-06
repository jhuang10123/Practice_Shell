#include "holberton.h"
/**
 * main - tokenizes a string
 * Return: 0
 */
int main()
{
	char str[] = "test string for strtok";
	char *tok_str, *argv[1024];
	int i;


	tok_str = strtok(str, " ");
	if (tok_str == NULL)
	{
		printf("No delimiter found\n");
		return (1);
	}
/*
	while (tok_str != NULL)
	{
*/
        for (i = 0; tok_str != NULL; i++)
        {
		argv[i] = tok_str;
		printf("argv[%d] = %s\n", i, argv[i]);
		printf("token = %s\n", tok_str);
		tok_str = strtok(NULL, " ");
	}
	return (0);

}
