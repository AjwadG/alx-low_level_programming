#include "main.h"

/**
 * div - function
 * @s: the string to check
 * @l: lenght 0f s
 * @i: the index
 *
 * Description: checks if a number is prime recursivly
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0
 */

int div(char *s, int l, int i)
{
	if (i < 0)
		return (1);
	else if (s[l - i] == s[i])
		return (div(s, l, --i));
	else
		return (0);
}

/**
 * is_palindrome - function
 * @s: a pointer toa string
 *
 * Description: check if s is a palindrome string
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (!s[0])
		return (1);
	return (div(s, l, l / 2));
}

/**
 * _strlen_recursion - function
 * @s: the string to check lenght
 *
 * Description: calcualtes the lenght of a string recursivly
 *
 * Return: the 1 + the retunr of the fucntion if it reached
 * the ned of the string it will return 0;
 */

int _strlen_recursion(char *s)
{
	if (s[0])
		return (1 + _strlen_recursion(&s[1]));
	return (0);

}
