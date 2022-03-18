#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Desription: using _putchar
 * Function: Print_alphabet_x10
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
