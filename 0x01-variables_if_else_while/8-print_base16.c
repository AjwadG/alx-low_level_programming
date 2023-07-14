#include <stdio.h>

/**
  * main - entry point
  *
  * Description: using while lop to print the digits of base 16
  * using their asci values from 48 - 57 then 97-102
  *
  * Return: zero if no eror
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i++);
	}

	i = 97;
	while (i <= 102)
	{
		putchar(i++);
	}

	putchar('\n');
	return (0);
}
