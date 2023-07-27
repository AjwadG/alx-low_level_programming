#include "main.h"

/**
 * _strcmp - fucntion
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Description: compares two strings s1 and s2
 *
 * Return: 0 if they r the same more or less on the defraces
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
			return (-s2[i]);
		else if (s2[i] == '\0')
			return (s1[i]);
		else if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/**
 * _strlen -  function
 * @s: pointer to to string
 * Description: returns the sum of ascii values of the string s
 *
 * Return: the sum of asci value of s
 */

int _strlen(char *s)
{
	int counter = 0, x = 0;

	while (s[counter] != '\0')
	{
		counter++;
		if (s[counter] != '!')
			x += (unsigned char) s[counter];
	}
	return (x);
}
