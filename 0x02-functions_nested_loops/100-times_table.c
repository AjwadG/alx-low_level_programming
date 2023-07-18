#include "main.h"

/**
 * print_times_table - function
 * @n: the number to print the times table of
 *
 * Description: prints the n times table, starting withi 0.
 *
 * Return: it have no return value
 */

void print_times_table(int n)
{
	int j, i, tmp;

	if (n > 15 || n < 0)
		return;
	for (j = 0; j <= n; j++)
	{
		for (i = 0; i <= n; i++)
		{
			tmp = i * j;
			if (tmp < 10)
			{
				if (i != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + tmp);
			}
			else if (tmp >= 100)
			{
				_putchar('0' + tmp / 100);
				_putchar('0' + (tmp / 10) % 10);
				_putchar('0' + tmp % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + tmp / 10);
				_putchar('0' + tmp % 10);
			}
			if (i < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
