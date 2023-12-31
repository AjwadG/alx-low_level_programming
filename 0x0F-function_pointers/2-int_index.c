#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of numbers
 * @size: size of the array
 * @cmp: apointer to fcuntion that we will use to search
 *
 * Return: Index of match or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 1)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
