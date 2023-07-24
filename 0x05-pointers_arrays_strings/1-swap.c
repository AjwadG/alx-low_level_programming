#include "main.h"

/**
 * swap_int -  function
 * @a: pointer to first int
 * @b: pointer to second int
 * Description: swaps the values of two integers.
 *
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
