#include "main.h"

/**
 * print_last_digit -  function
 * @n: the number to cheack vale
 *
 * Description: takes n as int as argument and returns the last digit
 * and printing it
 *
 * Return: The last digit of n
 */

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;
	_putchar('0' + n);
	return (n);
}
