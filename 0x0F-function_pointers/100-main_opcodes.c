#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 *
 * @argc: number of arg
 * @argv: pointer to array of args
 *
 * Return: Always 0 or exit with 1 or 2.
 */

int main(int argc, char **argv)
{
	int i, opc;
	unsigned char *p = (unsigned char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	opc = atoi(argv[1]);

	if (opc < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < opc; i++)
	{
		if (i < opc - 1)
			printf("%02x ", *p++);
		else
			printf("%02x\n", *p++);

	}

	return (0);
}
