#include <stdio.h>

/**
  * main - entry point
  *
  * Description: using for lop to add anumber to asci value of n(a)
  * and printg it 26 times
  *
  * Return: zero if no eror
 */
int main(void)
{
	char n = 'a';

	int i = 0;

	while (i < 26)
	{
		putchar(n + i++);
	}

	putchar('\n');
	return (0);
}
