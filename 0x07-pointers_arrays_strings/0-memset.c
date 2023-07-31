#include "main.h"

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
