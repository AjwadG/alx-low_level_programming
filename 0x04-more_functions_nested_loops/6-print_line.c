#include "main.h"

/**
 * print_line -  function
 * @n: the number of _ to print
 *
 * Description: draws a straight line in the terminal n number of times.
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
