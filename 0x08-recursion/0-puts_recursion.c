#include "main.h"

/**
 * _puts_recursion - recursiv function
 * @s: The character to print
 *
 * Description: prints a string, followed by
 * a new line recursivly
 */

void _puts_recursion(char *s)
{
	if (s[0])
	{
		_putchar(s[0]);
		_puts_recursion(&s[1]);
	}
	else
	{
		_putchar('\n');
	}
}


/**
 * len - function
 * @c: the string to check lenght
 *
 * Description: calcualtes the lenght of a string recursivly
 *
 * Return: the 1 + the retunr of the fucntion if it reached
 * the ned of the string it will return 0;
 */
int len(char *c)
{
	if (c[0])
		return (1 + len(&c[1]));
	return (0);

}
