#include "main.h"

/**
 * print_triangle -  function
 * @size: is the size of the triangle
 *
 * Description: prints a triangle of size (size), followed by a new line.
 *
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');

}
