#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print result of of multication
 * @argc: count the integer of an  argument
 * @argv: an array of strings in an argument
 * Return: Error if no argument passed else Success
 */
int main(int argc, char *argv[])
{
	int a, i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		a = i * j;
		printf("%d\n", a);
	}
		return (0);
}
