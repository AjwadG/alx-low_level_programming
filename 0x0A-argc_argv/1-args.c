#include "stdio.h"

/**
 * main - Entry point
 * @argc: the number of comanline arguments
 * @argv: a pointer to array contains coman line argumants
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argv[0][0])
		printf("%d\n", argc - 1);
	return (0);
}
