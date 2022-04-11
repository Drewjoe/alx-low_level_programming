#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: a string pointer
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *p;
	int j, k = 0;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		k++;

	p = malloc(sizeof(char) * (k + 1));

	if (p == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		p[j] = str[j];
	p[k] = '\0';
	return (p);
}
