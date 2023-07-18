#include "main.h"

/**
 * print_alphabet - function
 *
 * Description: takes no argument and print all alphabet
 * in lower case followed by a newline
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
