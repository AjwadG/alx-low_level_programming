#include "main.h"

/**
 * get_bit - get the value at given index of a bit
 * @n: a number
 * @index: the index
 * Return: the value or -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	return ((n >> index) & 1);
}
