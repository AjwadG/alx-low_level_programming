#include <stdio.h>
#include "main.h"
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
	unsigned long int n1f, n2f, sumf, n1s, n2s, sums;
	int i, j, n0;

	sumf = 0;
	sums = 0;
	n2s = 0;
	n1s = 0;
	n1f = 0;
	n2f = 1;
	for (i = 1; i <= 98; i++)
	{
		sumf = n1f + n2f;
		sums = n1s + n2s;
		sums += sumf / 1000000000;
		sumf %= 1000000000;

		n1f = n2f;
		n2f = sumf;
		n1s = n2s;
		n2s = sums;
		if (sums != 0)
		{
			printf("%lu", sums);
			n0 = tmp(sumf);
			for (j = 0; j < n0; j++)
				printf("0");
		}
		printf("%lu", sumf);
		if (i < 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}


/**
 * tmp - function to calculate the number of 0s
 * @x: the first half of the number
 *
 * Description: this function calculates the number of zeros missing
 * after the first digit of the first half
 *
 * Return: the number of 0s
 */
int tmp(unsigned long int x)
{
	int l = 0;

	do {
		x /= 10;
		l++;
	} while (x != 0);

	return (9 - l);
}
