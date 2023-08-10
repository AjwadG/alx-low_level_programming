#include "main.h"

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

	_memset(array, 0, nmemb * size);
	return (array);
}

/**
 * _memset - function
 *
 * @s: a pointer to string that (n) of it will be filled by (b)
 * @b: the byte that will be sued to fill s.
 * @n: the number of bytes to fill as int.
 *
 * Description: fills memory with a constant byte (b).
 *
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
