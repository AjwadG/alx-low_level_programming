#include "main.h"

/**
 * div - function
 * @n: the number to check its sqrt
 * @x: the number to divide
 *
 * Description: returns the natural square root of a number.
 *
 * Return: -1 if the number dose ont have a natural sqrt
 * or the sqrt of n.
 */

int div(int n, int x)
{
	if (n / x == x && n % x == 0)
		return (x);
	else if (x == n / 2 || n <= 3)
		return (-1);
	return (div(n, x + 1));
}

/**
 * _sqrt_recursion - function
 * @n: the number to check its sqrt
 *
 * Description: returns the natural square root of a number.
 *
 * Return: -1 if the number dose ont have a natural sqrt
 * or the sqrt of n.
 */

int _sqrt_recursion(int n)
{
	return (div(n, 1));
}

