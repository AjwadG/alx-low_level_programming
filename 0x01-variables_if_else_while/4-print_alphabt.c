#include <stdio.h>

/**
  * main - entry point
  *
  * Description: using for lop to add anumber to asci value of n(a)
  * and printg it 26 times and skips e,q and the when i = 4,16
  *
  * Return: zero if no eror
 */
int main(void)
{
	char n = 'a';

	int i = 0;

	while (i < 26)
	{
		if (i == 4 || i == 16)
		{
			i++;
			continue;
		}
		putchar(n + i++);
	}

	putchar('\n');
	return (0);
}
