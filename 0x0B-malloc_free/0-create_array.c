#include "main.h"

/**
 * create_array -  creates an array
 * @size: size of the array
 * @c: the char to fill the array with
 *
 * Description: creates an array of chars,
 * and initializes it with a specific char (c).
 *
 * Return: a pointer to the array or Null if size <= 0
 * or failed to alocate memory
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);

	if (size <= 0 || array == NULL)
		return (NULL);
	while (size--)
	{
		array[size] = c;
	}
	return (array);
}
