#include "main.h"

/**
 * puts2 -  function
 * @str: pointer  to string
 * Description: prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 */

void puts2(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		if (counter % 2 == 0)
			_putchar(str[counter]);
		counter++;
	}

	_putchar('\n');
}
