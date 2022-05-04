#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n : unsigned long int
 * @m : unsigned long int
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int s;
	int i = 0;
	s = n ^ m;

	while (s >= 1)
	{
		if ((s & 1) == 1)
		i++;
		s >>= 1;
	}
	return (i);
}
