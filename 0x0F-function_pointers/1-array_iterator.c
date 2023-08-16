#include "function_pointers.h"

/**
 * array_iterator -  executes a function on each element of an array.
 *
 * @array: array of numbers
 * @size: size of the array
 * @action: apointer to fcuntion that we will use on the araay elemts
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
