#include "main.h"

/**
 * print_rev -  function
 * @s: pointer  to string
 * Description: prints a string, in reverse, followed by a new line.
 *
 */

void print_rev(char *s)
{
	int counter;

	for (counter = _strlen(s) - 1; counter >= 0; counter--)
	{
		_putchar(s[counter]);
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
