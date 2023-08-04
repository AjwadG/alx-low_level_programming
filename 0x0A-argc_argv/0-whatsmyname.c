#include "stdio.h"

/**
 * main - check the code
 * @argc: the number of comanline arguments
 * @argv: a pointer to array contains coman line argumants
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
