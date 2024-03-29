#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int m, n;
	int **b;

	if (width <= 0 || height <= 0)
		return (NULL);
	b = (int **)malloc(sizeof(int *) * height);
	if (b == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		b[m] = (int *)malloc(sizeof(int) * width);
		if (b[m] == NULL)
		{
			for (n = 0; n < m; n++)
				free(b[n]);
			free(b);
			return (NULL);
		}
		for (n = 0; n < width; n++)
		{
			b[m][n] = 0;
		}
	}
	return (b);
}
