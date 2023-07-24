#include "main.h"

/**
 * rev_string -  function
 * @s: pointer  to string
 * Description: reverses the string s.
 *
 */

void rev_string(char *s)
{
	int counter, l = (_strlen(s) - 1);
	char tmp;

	for (counter = 0; counter <= l / 2; counter++)
	{
		tmp = s[l - counter];
		s[l - counter] = s[counter];
		s[counter] = tmp;
	}
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
