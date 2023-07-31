#include "main.h"
/**
 * _strstr - function
 *
 * @haystack: a pointer to a string to search in.
 * @needle: a pointer to a string tp search from
 *
 * Description: locates the substring needle in haystack.
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (0x0);
}
