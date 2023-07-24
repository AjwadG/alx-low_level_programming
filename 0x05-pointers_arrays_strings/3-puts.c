#include "main.h"

/**
 * _puts -  function
 * @str: pointer  to string
 * Description:  prints a string, followed by a new line
 *
 */

void _puts(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}

	_putchar('\n');
}
