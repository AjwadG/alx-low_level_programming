#include "main.h"

/**
 * print_number -  function
 * @n: the number to print
 *
 * Description: prints an integer (n).
 *
 */

void print_number(int n)
{
	int i, j, l;
	unsigned int tmp, un = n;

	if (n < 0)
	{
		un *= -1;
		_putchar('-');
	}

	l = lenght(un);
	for (i = 1; i <= l; i++)
	{
		tmp = un;
		for (j = i; j < l; j++)
		{
			tmp /= 10;
		}
		_putchar('0' + tmp % 10);
	}
}

/**
 * lenght -  function
 * @x: the number to calculate lenght
 *
 * Description: calculates the lenght of x
 *
 * Return: the lenght of x
 */

int lenght(unsigned int x)
{
	int counter = 0;

	do {
		x /= 10;
		counter++;
	} while (x != 0);
	return (counter);
}
