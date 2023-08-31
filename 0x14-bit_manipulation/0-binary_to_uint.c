#include "main.h"

/**
 * binary_to_uint - frees the listint_t list
 * @b: a string of binary numbers
 * Return: the number or NULL if b is not 1 and 0 only
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0, i = 0;

	if (!b)
		return (binary);

	while (b[i])
	{
		binary = binary << 1;
		if (b[i] > '9' || b[i] < '0')
			return (0);
		binary += b[i] - '0';
		i++;
	}
	return (binary);
}
