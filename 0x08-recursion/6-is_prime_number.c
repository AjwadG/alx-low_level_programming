#include "main.h"

/**
 * div - function
 * @n: the number to check its prime
 * @x: the number to divide
 *
 * Description: checks if a number is prime recursivly
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0
 */

int div(int n, int x)
{
	if (n % x == 0 || n < x)
		return (0);
	else if (x == n / 2)
		return (1);
	return (div(n, x + 1));
}

/**
 * is_prime_number - function
 * @n: the number to if its prime
 *
 * Description: checks if a number is prime recursivly
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0
 */

int is_prime_number(int n)
{
	return (div(n, 2));
}

