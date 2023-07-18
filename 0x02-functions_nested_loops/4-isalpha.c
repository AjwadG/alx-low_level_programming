#include "main.h"

/**
 * _isalpha - function
 * @c: the char to cheack
 * Description: takes c as int as argument and returns 1 if its alphabetic
 * character and 0 if otehr wise
 *
 * Return: 1 if alphabetic character and 0 if not.
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
