#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate a memory using malloc
 * @b: unsigned int size to allocate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *g;

	g = malloc(b);
	if (g == NULL)
	{
		exit(98);
	}
	return (g);
}
