#include <stdio.h>

/**
  * main - entry point
  *
  * Description: using for lop to print the singel digit numbers
  * using their asci values
  *
  * Return: zero if no eror
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i++);
	}

	putchar('\n');
	return (0);
}
