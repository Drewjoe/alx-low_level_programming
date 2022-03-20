#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 48;

	while  (a < 58)
	{
		putchar(a);
		if (a !=  57)
		{
			putchar(44);
			putchar(32);
			a++;
		}
		else
		{
			a++;
		}
	}
	putchar('\n');
	return (0);
}
