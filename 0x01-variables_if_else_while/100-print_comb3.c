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
	int j, i = 48;

	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i < 56 || j < 57)
				{
					putchar(44);
					putchar(32);
				}
			}
			j++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}
