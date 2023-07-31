#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function
 *
 * @a: a pointer to a tow dimension array of type char.
 * @size: the size of each dime and they r the same.
 *
 * Description: prints the sum of the two diagonals of
 * a square matrix of integers.
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	long int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i + size * i];
		sum2 += a[size * (i + 1) - 1 - i];
	}

	printf("%ld, %ld\n", sum1, sum2);
}
