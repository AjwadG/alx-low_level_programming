#include "main.h"

/**
 * _atoi -  function
 * @s: pointer to the string
 *
 * Description: converting a string to an integer and ingnoring any
 * leading non numaric chars and breaks on the first no numaric char
 * after the numbers if any
 *
 * Return: num the value after converting
 */

int _atoi(char *s)
{
	int i, negative = 0;
	unsigned int num = 0;
	char tmp = ' ';

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else if (tmp >= '0' && tmp <= '9')
		{
			break;
		}

		tmp = s[i];
		if (tmp == '-')
			negative++;
	}
	if (negative % 2 != 0)
		return (-num);
	else
		return (num);
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
