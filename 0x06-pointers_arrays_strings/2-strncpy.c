#include "main.h"

/**
 * _strncpy - fucntion
 * @src: a pointer to the string to copy from
 * @dest: a pointer to the string to to copy to (concatenate)
 * @n: the number of char to copy
 *
 * Description: copies n number of cars from src to dest string
 *
 * Return: a pointer the fianl string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, x = 0;

	for (i = 0; i < n; i++)
	{
		if (x == 0)
		{
			if (src[i] == '\0')
				x++;
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
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
