#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, i;
	char *y;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	y = (char *) main;
	i = 0;
	if (a > 0)
	{
		while (i < (a - 1))
			printf("%02hhx ", y[i++]);
		printf("%hhx\n", y[i]);
	}
	return (0);
}
