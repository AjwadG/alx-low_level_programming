#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: the number of comanline arguments
 * @argv: a pointer to array contains coman line argumants
 * Return: 1 if argc dose not equal 3 and 0 otherwise.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	while (--argc)
	{
		for (i = 0; i < (int) strlen(argv[argc]); i++)
		{
			if (argv[argc][i] < '0' || argv[argc][i] > '9')
			{
				printf("Error\n");
				return (1);
			}

		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
