#include "main.h"
#include <stdio.h>

/**
 * print_array -  function
 * @a: pointer  to string
 * @n: the number of char to print as int
 *
 * Description: prints n elements of an array of integers,
 * followed by a new line.
 *
 */

void print_array(int *a, int n)
{
	int counter = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (counter = 0; counter < n; counter++)
	{
		if (counter < n - 1)
			printf("%d, ", a[counter]);
		else
			printf("%d\n", a[counter]);
	}
}
