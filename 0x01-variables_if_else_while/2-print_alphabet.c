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

	for (low_alphabet = 'a'; low_alphabet <= 'z'; low_alphabet++)
	{
		putchar(low_alphabet);
		putchar('\n');
	}
	return (0);
}
