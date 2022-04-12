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
<<<<<<< HEAD
	int *x;
=======
	void *p;
>>>>>>> bda6dc77658e5227337337a8a8a0cbe13bf993ec

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
