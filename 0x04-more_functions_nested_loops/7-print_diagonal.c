#include "main.h"

/**
 * print_diagonal -  function
 * @n: the number of \ to print
 *
 * Description: draws a diagonal line on the terminal of linght n.
 *
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');

}
