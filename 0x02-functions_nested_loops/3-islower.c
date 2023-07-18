#include "main.h"

/**
 * _islower - function
 * @c: the char to cheack case
 * Description: takes c as int as argument and returns 1 if its lowercase
 * and 0 if otehr wise
 *
 * Return: 1 if lower and 0 if not.
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
