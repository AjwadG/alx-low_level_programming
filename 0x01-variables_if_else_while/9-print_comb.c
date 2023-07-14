#include <stdio.h>

/**
  * main - entry point
  *
  * Description: using for lop to print the digits of base 10
  * using their asci values from 48 - 57 sperated bt ',' and ' '
  *
  * Return: zero if no eror
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i++ < 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
