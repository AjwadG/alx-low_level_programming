#include "main.h"

/**
 * set_bit - set the value at given index of a bit to 1
 * @n: apointer to a number
 * @index: the index
 * Return: 1 or -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32 || n == NULL)
		return (-1);
	*n = *n | (1 << index);

	return (1);
}
