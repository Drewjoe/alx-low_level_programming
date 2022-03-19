#include "main.h"

 /**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 * Return: void
 */
void print_number(int n)
{
  unsigned int x = n;
  if (n < 0)
  {
    _putchar('-');
    x = -x;
  }
  if ((x / 10) > 0)
  print_number(x / 10);
  _putchar(x % 10 + '0');
}
