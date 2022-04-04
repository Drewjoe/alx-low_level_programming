#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		b = 1;
		for (a = 1; a< 3; a++)
			b *= atoi(argv[a]);
		printf("%d\n", b);
	}
	return (0);
}
