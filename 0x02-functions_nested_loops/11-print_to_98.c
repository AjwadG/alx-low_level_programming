#include "main.h"
/**
 * print_to_98 - function
 *
 * @n: the number start from unitll it reaches 98
 *
 * Description: prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * Return: it have no return value
 */

void print_to_98(int n)
{
	int tmp, n1, n2;

	while (n != 98)
	{
		tmp = n;
		if (tmp < 0)
		{
			tmp *= -1;
			_putchar('-');
		}
		n1 = tmp / 10;
		n2 = tmp % 10;
		if (tmp >= 100)
			_putchar('0' + n1 / 10);
		if (tmp >= 10)
			_putchar('0' + n1 % 10);
		_putchar('0' + n2);
		if (n > 98)
			n--;
		else
			n++;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
