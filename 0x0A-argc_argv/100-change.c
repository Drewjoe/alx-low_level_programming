#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change
 * @argc: count the number in integer of an argument
 * @argv: an array of strings in an argument
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, s, p, k = 0;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	p = atoi(argv[1]);

	if (p < 1)
		printf("0\n");
	else
	{
		for (i = 0; i < 5 && p; i++)
		{
			s = p / c[i];
			k += s;
			p -= s * c[i];
		}
		printf("%d\n", k);
	}
	return (0);
}
