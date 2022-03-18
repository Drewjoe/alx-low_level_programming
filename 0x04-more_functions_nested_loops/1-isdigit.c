#include "main.h"

/**
 *
 * _isdigit - check digit.
 * Description: Checks for a digit
 * @c: integer
 *
 * Return: 1 success
 *
 */
int _isdigit(int c)

{
	if ((c >= 48) && (c <= 57))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
