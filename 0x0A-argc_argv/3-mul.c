#include "stdio.h"
#include "stdlib.h"
/**
 * main - Entry point
 * @argc: the number of comanline arguments
 * @argv: a pointer to array contains coman line argumants
 * Return: 1 if argc dose not equal 3 and 0 otherwise.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
