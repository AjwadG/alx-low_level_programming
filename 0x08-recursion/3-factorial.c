#include "main.h"

/**
 * factorial - function
 * @n: the number to chek its factorial
 *
 * Description: returns the factorial of a given number.
 *
 * Return: -1 if the number is less then 0 or
 * the factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
