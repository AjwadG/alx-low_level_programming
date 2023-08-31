#include "main.h"

/**
 * flip_bits - calculates numbermber to another.
 * @n: first number
 * @m: second number
 *
 * Descritopn: calcluates number of bits you would need to flip
 * to get from one number to another.
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n = n ^ m;
	m = 0;

	while (n)
	{
		if (n & 1)
			m++;
		n = n >> 1;
	}
	return (m);
}
