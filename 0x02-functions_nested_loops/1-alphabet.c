#include <main.h>
#include <stdio.h>
/**
 * main - Print alphabet in lowercase
  *Description: A function that prints alphabet in lowercase, followed by a new line
 * Return: 0 (Success)
 */
 int main (void)
 {
   print_alphabet();
   return (0);
 }
 void print_alphabet(void)
{
  char letter;
  for (letter = 'a' ; letter <= 'z' ; letter++)
  {
    _putchar(letter);
  }
  _putchar('\n');
	return (0);
}
