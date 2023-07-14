#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
  * main - entry point
  *
  * Description: using srand func to genrate ranom number
  * for then using if else to decide the to print outpu based on the last
  * digit and to calcualte the last digit whe divid the value by 10 so we lose
  * the last digit then we time it by 10 to get back the full lenght the we
  * subtract the value from the old value
  *
  * Return: zero if no eror
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is ", n);
	n = n % 10;
	if (n == 0)
		printf("0 and is 0\n");
	else if (n > 5)
		printf("%d and is greater than 5\n", n);
	else
		printf("%d and is less than 6 and not 0\n", n);
	return (0);
}
