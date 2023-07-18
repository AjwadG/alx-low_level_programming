#include "main.h"

/**
 * print_alphabet_x10 - function
 *
 * Description: takes no argument and print all alphabet
 * in lower case followed by a newline 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int j;
	char i;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
