#include "main.h"
/**
 * main - Print alphabet in lowercase
  *Description: Prints alphabet in lowercase, followed by a new line.
 * Return: 0 (Success)
 */
 
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
