#include "main.h"
#include <string.h>
/**
 * _calloc -  creates an array of all 0
 * @size: number of bytes for each elemnt
 * @nmemb: size of array
 *
 *
 * Return: a pointer to the array or Null if size = 0
 * or nmemb or failed to alocate memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb * size == 0)
		return (NULL);
	array = malloc(nmemb * size);

	if (!array)
		return (NULL);

	memset(array, 0, nmemb * size);
	return (array);
}
