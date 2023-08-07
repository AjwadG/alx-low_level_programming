#include "main.h"

/**
 * _strdup -  creates a copy
 * @str: a pointer to a string
 *
 * Description: allocate space in memory, which
 * contains a copy of the string str.
 *
 * Return: a pointer to new string or Null if str = NULL
 * or failed to alocate memory
 */

char *_strdup(char *str)
{
	int l = len(str);
	char *new = malloc(sizeof(char) * l);

	if (!l || new == NULL)
		return (NULL);

	while (l--)
	{
		new[l] = str[l];
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
		return (0);
	if (s[0])
		return (1 + len(&s[1]));
	else
		return (1);
}
