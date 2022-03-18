#include "main.h"

/**
 * Main: Print_alphabet_x10
 * Desription: Prints 10 times the alphabet 10 timeusing _putchar
 * Function: Prints 10 times the alphabet 10 timeusing _putchar
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
