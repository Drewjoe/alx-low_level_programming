#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space in memory, or NULL if error
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int m, n, o, p;
	char *s;

	if (s1 == NULL)
		m = 0;
	else
	{
		for (m = 0; s1[m]; m++)
			;
	}
	if (s2 == NULL)
		n = 0;
	else
	{
		for (n = 0; s2[n]; n++)
			;
	}
	o = m + n + 1;
	s = malloc(o * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (p = 0; p < m; p++)
		s[p] = s1[p];
	for (p = 0; p < n; p++)
		s[p + m] = s2[p];
	s[m + n] = '\0';
	return (s);
}
