#include "3-calc.h"

/**
 * main - calculater using functions pointers
 *
 * @argc: number of arg
 * @argv: pointer to array of args
 *
 * Return: Always 0 or exit with 98.99 or 100.
 */

int main(int argc, char **argv)
{
	int n1, n2, (*f)(int a, int b);
	char *opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opr = argv[2];
	f = get_op_func(opr);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if ((opr[0] == '/' || opr[0] == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(n1, n2));
	return (0);
}
