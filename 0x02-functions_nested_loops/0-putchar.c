#include "main.h"
/**
 * main - Entry Block
  *Description: A program that prints _putchar, followed by a new line
 * Return: 0
 */
int _putchar(char _putchar)
{
	_putchar('\n');
	return (write (1, &_putchar, 1));
}
