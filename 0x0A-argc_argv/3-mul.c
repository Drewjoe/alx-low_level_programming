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
	int q, r, s;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	r = atoi(argv[1]);
	s = atoi(argv[2]);
	c = r * s;
	printf("%d\n", q);
	return (0);
}
