#include "main.h"

/**
 * str_concat -  Concatenates tow strings
 * @s1: a pointer to a string
 * @s2: a pointer to a string
 *
 * Description: allocate space in memory, which
 * contains a copy of the string str.
 *
 * Return: a pointer to new string or Null if str = NULL
 * or failed to alocate memory
 */

char *str_concat(char *s1, char *s2)
{
	int i, l1 = len(s1), l2 = len(s2), l = l1 + l2 - 1;
	char *new = malloc(sizeof(char) * (l));

	if (!new)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		if (i < l1 - 1 && l1 != 1)
			new[i] = s1[i];
		else if (i < l - 1)
			new[i] = s2[i - l1 + 1];
		else
			new[i] = '\0';
	}

	return (new);
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
