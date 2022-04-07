#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds all positive numbers
 * @argc: count the number of argument
 * @argv: an array of strings of an argument
 * Return: Result, 0, Error
 */
int main(int argc, char *argv[])
{
	int sum = 0, s, t;

	for (s = 1; s < argc; s++)
	{
		for (t = 0; argv[s][t] != '\0'; t++)
		{
			if (!isdigit(argv[s][t]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[s]);
	}
	printf("%d\n", sum);
	return (0);
}
