#include "main.h"

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
