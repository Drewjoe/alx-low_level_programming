#include "function_pointers.h"

/**
 * int_index - searches for an integer returns the index of the first element
 * @array: pointer to integer array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: 1 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, s;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			s = cmp(array[i]);
			if (s)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
