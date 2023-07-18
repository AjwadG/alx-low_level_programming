#include <stdio.h>

/**
 * main - entry point
 *
 * Description: rints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: allways 0 (success)
 */

int main(void)
{
	unsigned long int n1, n2, tmp;
	int i;

	n1 = 1;
	n2 = 2;
	printf("%lu, %lu, ", n1, n2);
	for (i = 3; i <= 50; i++)
	{
		tmp = n1 + n2;
		if (i != 50)
		{
			printf("%lu, ", tmp);
			n1 = n2;
			n2 = tmp;
		}
		else
		{
			printf("%lu", tmp);
		}
	}
	printf("\n");
	return (0);
}
