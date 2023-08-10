#include "main.h"

/**
 * array_range -  creates an array int fille with a range
 * @min: first number
 * @max: last number
 *
 *
 * Return: a pointer to the array or Null if min > max
 * or failed to alocate memory
 */

int *array_range(int min, int max)
{
	int i, range = max - min + 1;
	int *array;

	if (min > max)
		return (NULL);
	array = (int *) malloc(sizeof(i) * range);
	if (!array)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		array[i - min] = i;
	}
	return (array);
}
