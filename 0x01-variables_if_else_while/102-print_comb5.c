#include <stdio.h>

/**
  * main - entry point
  *
  * Description: using tow while lops to print every combination of tow
  * digits of base 10 using their asci values from 48 - 57 sperated
  * bt ',' and ' '
  *
  * Return: zero if no eror
 */
int main(void)
{
	int j, i = 0;

	while (i <= 99)
	{
		j = 0;
		while (j <= 99)
		{
			if (i < j)
			{
				putchar('0' + i / 10);
				putchar('0' + i % 10);
				putchar(' ');
				putchar('0' + j / 10);
				putchar('0' + j % 10);
				if (i < 98 || j < 99)
				{
					putchar(44);
					putchar(32);
				}
				j++;
			}
			else
			{
				j++;
			}
		}
		i++;
	}

	putchar('\n');
	return (0);
}
