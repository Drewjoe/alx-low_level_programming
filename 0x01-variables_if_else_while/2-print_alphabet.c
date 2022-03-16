#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *	* main - This prints all the alphabet in lower case
 *	*
 *	* Return: Always 0 (Success)
 **/

int main(void)
{
	char low_alphabet;
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
