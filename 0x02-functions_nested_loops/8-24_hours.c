#include "main.h"

/**
 * jack_bauer- function
 *
 * Description: prints every minute of the day
 *
 * Return: it have no return value
 */

void jack_bauer(void)
{
	int j, i;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar(':');
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar('\n');
		}
	}
}
