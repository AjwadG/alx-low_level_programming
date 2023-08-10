#include "main.h"

/**
 * malloc_checked -  alocate a memory of size b
 * @b: size of memory wanted
 *
 * Return: apointer of type void
 */

void *malloc_checked(unsigned int b)
{
	void *pt = malloc(b);

	if (pt != NULL)
		return (pt);
	exit(98);
}

/**
 * len - calculates the lenght of s
 * @s: apointer to string
 *
 * Return: the string of s or 0 if s = NULL
 */
int len(char *s)
{
	if (!s)
		return (1);
	if (s[0])
		return (1 + len(&s[1]));
	else
		return (1);
}
