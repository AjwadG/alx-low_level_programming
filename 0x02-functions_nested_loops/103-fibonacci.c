#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Fibonacci terms less then 4,000,000,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: allways 0 (success)
 */

int main(void)
{
	unsigned long int n1, n2, tmp, sum;

	n1 = 0;
	n2 = 1;
	sum = 0;
	do {
		tmp = n2;
		if (tmp % 2 == 0)
			sum += tmp;
		tmp = n1 + n2;
		n1 = n2;
		n2 = tmp;
	} while (tmp < 4000000);
	printf("%lu\n", sum);
	return (0);
}
