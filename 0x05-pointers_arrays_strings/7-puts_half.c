#include "main.h"

/**
 * puts_half -  function
 * @str: pointer  to string
 * Description:  prints half of a string, followed by a new line.
 *
 */

void puts_half(char *str)
{
	int counter, l = _strlen(str) +  1;

	for (counter = l / 2; counter < _strlen(str); counter++)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
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
