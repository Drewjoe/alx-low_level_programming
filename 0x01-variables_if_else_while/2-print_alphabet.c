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
	char low_alphabet[26] = "abcdefghijklmnopqrstuvwxyz ";
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(low_alphabet[i]);
	}
	return (0);
}
