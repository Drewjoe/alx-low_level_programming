#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @size: creates positive int
 * @c:initialise character argument
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
