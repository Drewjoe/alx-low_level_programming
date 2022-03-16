/**
 * main - Entry Block
  *Description: A program that prints _putchar, followed by a new line
 * Return: 0
 */
 #include "main.h"
 #include <stdio.h>

int main(void)
{
	char c[8] = '_putchar';

	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
