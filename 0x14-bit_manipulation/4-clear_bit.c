#include "main.h"

/**
 * clear_bit - set the value at given index of a bit to 0
 * @n: apointer to a number
 * @index: the index
 * Return: 1 or -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32 || n == NULL)
		return (-1);
	if ((*n >> index & 1) == 1)
		*n = *n ^ (1 << index);

	return (1);
}
