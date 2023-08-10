#include "main.h"

/**
 * _realloc -  reallocates ptr to the wanted new size
 * @ptr: first number
 * @old_size: the size of ptr
 * @new_size: the new wanted size
 *
 *
 * Return: a pointer to the array or Null if new_size = 0 and ptr != null
 * or failed to alocate memory or ptr if old = new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int l = old_size < new_size ? old_size : new_size;

	if (old_size == new_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr)
			return (newptr);
		else
			return (NULL);
	}


	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);

	_memcpy(newptr, ptr, l);
	free(ptr);
	return (newptr);

}

/**
 * _memcpy - function
 *
 * @dest: a pointer to the destination string.
 * @src: a poniter to the source string.
 * @n: the number of bytes to copy as int.
 *
 * Description: copies n of memory area from src to dest;
 *
 * Return: a pointer to the memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
