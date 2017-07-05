#include "holberton.h"
/**
 * main - prints all the arguments, without using ac
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != '\0'; i++)
		printf("argv[%d] = %s\n", i, argv[i]);

	return (0);

}
