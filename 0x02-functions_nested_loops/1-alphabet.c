<<<<<<< HEAD
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
=======
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
>>>>>>> bab8f5b0c8d0e83279d291eb8d671f6b7b4bd07c
}
