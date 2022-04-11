#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: double pointer to arguments
 * Return:pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
	int m, n, o = 0, p = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
			p++;
		p++;
	}
	s = malloc(p * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
		{
			s[o] = av[m][n];
			o++;
		}
		s[o] = '\n';
		o++;
	}
	s[o] = '\0';
	return (s);
}
