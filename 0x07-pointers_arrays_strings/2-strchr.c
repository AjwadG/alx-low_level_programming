#include "main.h"
#include <stddef.h>

/**
 * _strchr - function
 *
 * @s: a pointer to a string.
 * @c: the char to look for in (s)
 *
 * Description: locates the character (c) in the string (s).
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}
