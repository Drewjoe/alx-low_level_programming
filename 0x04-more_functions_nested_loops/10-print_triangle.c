#include "main.h"

/**
 * print_triangle - display a triangel
 * @size: Size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int m, n, p;
	
	if (size > 0)
	{
		for (m = 1; m <= size; m++)
		{
			for (n = 0; n <= (size - m - 1); n++)
			{
				_putchar(' ');
			}
			for (p = 0; p <= m - 1; p++)
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
