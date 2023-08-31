#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian or 1 if listile endian
 */
int get_endianness(void)
{
	int test = 1;

	return (*((short *) &test));
}
