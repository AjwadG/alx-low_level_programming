#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>




/**
 * fun1 - genrates index
 *
 * @username: argv[1]
 * @salt: lenght of argv[1]
 * @type: type of genrate fun
 * Return: index.
 */
int fun1(char *username, int salt, int type)
{
	int sum = 0, i;

	if (type == 2)
	{
		sum = 0;
		for (i = 0; i < salt; i++)
		{
			sum += username[i];
		}
		return ((sum ^ 0x4f) & 0x3f);
	}
	else if (type == 3)
	{
		sum = 1;
		for (i = 0; i < salt; i++)
		{
			sum *= username[i];
		}
		return ((sum ^ 0x55) & 0x3f);
	}
	else if (type == 4)
	{
		sum = username[0];
		for (i = 0; i < salt; i++)
		{
			if (sum < username[i])
				sum = username[i];
		}
		srand(sum ^ 0xe);
		sum = rand();
		return (sum & 0x3f);
	}
	return (sum);
}


/**
 * f5 - genrates index
 *
 * @username: argv[1]
 * @salt: lenght of argv[1]
 * Return: index.
 */
unsigned char f5(char *username, int salt)
{
	unsigned char sum;
	int i;

	sum = 0;
	for (i = 0; i < salt; i++)
	{
		sum += username[i] * username[i];
	}
	return ((sum ^ 0xef) & 0x3f);
}


/**
 * f6 - genrates index
 *
 * @username: first char of argv[1]
 * Return: index.
 */
unsigned char f6(char username)
{
	int sum;
	int i;

	sum = 0;
	for (i = 0; i < username; i++)
	{
		sum = rand();
	}
	return (((unsigned char) sum ^ 0xe5) & 0x3f);
}






/**
 * main - check the code
 *
 * @argc: number of args
 * @argv: array of args
 * Return: Always EXIT_SUCCESS.
 */
int main(int argc, char **argv)
{
	char *username, key[7], *code;
	int salt, index;

	if (argc != 2)
		return (1);
	username = argv[1];
	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	salt = (int) strlen(username);

	index = ((salt & 4294967295) ^ 59) & 63;
	key[0] = code[index];

	index = fun1(username, salt, 2);
	key[1] = code[index];

	index = fun1(username, salt, 3);
	key[2] = code[index];

	index = fun1(username, salt, 4);
	key[3] = code[index];

	index = f5(username, salt);
	key[4] = code[index];

	index = f6(username[0]);
	key[5] = code[index], key[6] = '\0';

	printf("%s", key);
	return (0);
}

