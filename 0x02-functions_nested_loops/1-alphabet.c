#include "main.h"
/**
 *
 * main: A function that prints alphabet in lowercase
 *
 * Description: Prints alphabet in lowercase
 *
 * * Return: Always 0 (Success)
 *
 * */

void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
