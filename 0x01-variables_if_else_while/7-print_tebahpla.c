#include <stdio.h>

/**
  * main - entry point
  *
  * Description: using for lop to subtract a number from the asci value of n(z)
  * and printg it 26 times
  *
  * Return: zero if no eror
 */
int main(void)
{
	char n = 'z';

	int i = 0;

	while (i < 26)
	{
		putchar(n - i++);
	}

	putchar('\n');
	return (0);
}
