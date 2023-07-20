#include <math.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: inds and prints the largest prime factor of the number
 * 612852475143, followed by a new line.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned long int j, i, n = 612852475143;
	int counter;

	while (n != 1)
	{
		for (i = 2; i <= sqrt(n); i++)
		{
			counter = 0;
			for (j = 2; j <= i; j++)
			{
				if (i % j == 0 && i != j)
				{
					counter++;
					break;
				}
			}
			if (counter == 0)
			{
				if (n % i == 0)
				{
					n /= i;
					break;
				}
			}
		}
		if (i - 1 == (int) sqrt(n))
			break;
	}
	printf("%lu\n", n);
	return (0);
}
