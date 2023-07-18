#include "main.h"

/**
 * print_sign - function
 * @n: the number to cheack vale
 * Description: takes n as int as argument and returns 1 if its greater than
 * zero, -1 if its less and 0 if otehr wise
 *
 * Return: 1 if posivtive,-1 if negative and 0 if other wise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
