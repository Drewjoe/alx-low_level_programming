#include "main.h"
/**
 * main - Print alphabet in lowercase
  *Description: A function that prints alphabet in lowercase, followed by a new line
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
  char letter;
  int i;

  for (i = 'a' ; i <= 'z' ; i++)
  {
    _putchar(letter, i);
  }
  _putchar('\n');
	return (0);
}
