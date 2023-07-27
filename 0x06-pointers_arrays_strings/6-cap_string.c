#include "main.h"

/**
 * cap_string - fucntion
 * @s: a pointer to a string
 *
 * Description: capitalizes all words of a string.
 *
 * Return: a pointer to the final string
 */

char *cap_string(char *s)
{
	int i, j, x = 1;
	char S[] = {' ', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] == '\t')
			x = 1;
		for (j = 0; j < _strlen(S); j++)
		{
			if (s[i] == S[j])
				x = 1;
		}
		if ((s[i] >= 'a' && s[i] <= 'z') && x == 1)
		{
			s[i] = s[i] - 'a' + 'A';
			x = 0;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			x = 0;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			x = 0;
		}
	}
	return (s);
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
