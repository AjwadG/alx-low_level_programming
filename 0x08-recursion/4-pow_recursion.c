#include "main.h"

/**
 * _pow_recursion - function
 * @x: the number
 * @y: its riased power
 *
 * Description: returns the value of x raised to the power of y
 *
 * Return: -1 if the number is less then 0 or
 * return x raised to y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y < 1)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
