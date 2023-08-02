#include "main.h"

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
