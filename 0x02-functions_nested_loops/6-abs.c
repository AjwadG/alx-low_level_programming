#include "main.h"

/**
 * _abs - function
 * @n: the number to cheack vale
 *
 * Description: takes n as int as argument and returns bsolute value
 *
 * Return: The bsolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
