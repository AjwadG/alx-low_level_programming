#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
  * main - entry point
  *
  * Description: using srand func to genrate ranom number
  * for then using if else to decide the out put negative ,
  * positive or zero
  *
  * Return: zero if no eror
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
