#include "main.h"

/**
 * _strcat - fucntion
 * @src: a pointer to the string to copy from
 * @dest: a pointer to the string to to copy to (concatenate)
 *
 * Description: concatenates two strings srcand dest
 *
 * Return: a pointer the fianl string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, x = 0;

	while (i <= 1)
	{
		if (i == 0)
		{
			if (dest[j] != '\0')
				j++;
			else
				i++;
		}
		else
		{
			if (src[x] == '\0')
				i++;
			dest[j] = src[x];
			x++;
			j++;
		}
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
