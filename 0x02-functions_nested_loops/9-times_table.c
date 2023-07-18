#include "main.h"

/**
 * times_table - function
 *
 * Description: prints the 9 times table, starting with 0.
 *
 * Return: it have no return value
 */

void times_table(void)
{
	int j, i, n;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			n = i * j;
			if (n < 10)
			{
				if (i != 0)
					_putchar(' ');
				_putchar('0' + n);
			}
			else
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
