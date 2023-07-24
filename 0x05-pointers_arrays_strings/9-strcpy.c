#include "main.h"

/**
 * _strcpy -  function
 * @dest: pointer  to the desticantion
 * @src: pointer  to the source string
 *
 * Description: copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int counter, l = _strlen(src);

	for (counter = 0; counter <= l; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}

/**
 * _strlen -  function
 * @s: pointer to to string
 * Description: returns the length of the string s
 *
 * Return: the lenght of s
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}
