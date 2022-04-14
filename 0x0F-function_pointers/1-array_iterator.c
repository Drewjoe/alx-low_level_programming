#include "function_pointers.h"

/**
 * array_iterator - executes a func param on each element of an array
 * @array: pointer to integer array.
 * @size: size of the array
 * @action:pointer to the function to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
	{
		for (i = 0, i < size, i++)
			action(array[i]);
	}
}
