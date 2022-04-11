#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int m, n;
	int *a;

	if (min > max)
		return (NULL);
	n = (max - min) + 1;
	a = malloc(sizeof(int) * n);
	if (a == NULL)
		return (NULL);
	for (m = 0; m < n; m++, min++)
	{
		a[m] = min;
	}
	return (a);
}
