#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
