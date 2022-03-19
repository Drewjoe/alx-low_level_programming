#include "main.h"

/**
 * print_triangle - display a triangle
 * @size: Size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, x;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j <= (size - i - 1); j++)
			{
				_putchar(' ');
			}
			for (x = 0; x <= i - 1; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
