#include "main.h"

/**
 * string_nconcat -  concatenates tow strings only (n0 from the second
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to copy from the second strng
 *
 * Return: a pointer to new string or NULL in fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l1 = len(s1), l2 = len(s2), l;
	char *new;

	if (n >= l2)
		l = l1 + l2 - 1;
	else
		l = l1 + n;
	new = malloc(sizeof(char) * (l));
	if (!new)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		if (i < l1 - 1 && l1 != 1)
			new[i] = s1[i];
		else if (i < l - 1)
			new[i] = s2[i - l1 + 1];
	}
	new[l - 1] = '\0';
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
