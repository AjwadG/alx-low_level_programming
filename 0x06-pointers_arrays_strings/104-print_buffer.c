#include "main.h"
#include <stdio.h>

/**
 * print_buffer - fucntion
 * @b: a pointer to a string
 * @size: is the size of b
 *
 * Description: prints a buffer if print able if not
 * print . insted but the values is preited wither way
 *
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x:", i);

		for (j = i; j < i + 10; j++)
		{
			if (j % 2 == 0)
				putchar(' ');
			if (j >= size)
				printf("  ");
			else if (b[j] < ' ')
				printf("%02x", b[j]);
			else
				printf("%02x", b[j]);
		}
		putchar(' ');
		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
				break;
			if (b[j] < ' ')
				putchar('.');
			else
				putchar(b[j]);
		}
		putchar('\n');
	}

}
