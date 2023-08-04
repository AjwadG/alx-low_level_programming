#include "main.h"

/**
 * main - Entry point
 * @argc: the number of comanline arguments
 * @argv: a pointer to array contains coman line argumants
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
