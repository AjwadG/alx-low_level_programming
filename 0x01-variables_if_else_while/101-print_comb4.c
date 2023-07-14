#include <stdio.h>

/**
  * main - entry point
  *
  * Description: using three while lops to print every combination of three
  * digits of base 10 using their asci values from 48 - 57 sperated
  * bt ',' and ' '
  *
  * Return: zero if no eror
 */
int main(void)
{
	int j, k, i = 48;

	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			k = 48;
			while (k <= 57)
			{
				if (j == i)
					break;
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < 55 || j < 56 || k < 57)
					{
						putchar(44);
						putchar(32);
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}
