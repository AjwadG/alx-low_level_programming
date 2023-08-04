#include "main.h"
/**
 * main - Entry point
 * @argc: the number of comanline arguments
 * @argv: a pointer to array contains coman line argumants
 * Return: 1 if argc dose not equal 3 and 0 otherwise.
 */
int main(int argc, char *argv[])
{
	int numberOfCoins = 0, cents =  atoi(argv[argc - 1]);

	if (argc != 2 || _isNumber(argv[argc - 1]))
	{
		printf("Error\n");
		return (1);
	}

	if (cents > 0)
	{
		while (cents)
		{
			if (cents - 25 >= 0)
				cents -= 25;
			else if (cents - 10 >= 0)
				cents -= 10;
			else if (cents - 5 >= 0)
				cents -= 5;
			else if (cents - 2 >= 0)
				cents -= 2;
			else
				cents -= 1;
			numberOfCoins++;
		}
	}

	printf("%d\n", numberOfCoins);
	return (0);
}


/**
 * _isNumber - checks if s in a number or nor
 * @s: a pinter to astring
 *
 * Return: 0 if s is a number 1 other wise.
 */
int _isNumber(char *s)
{
	int i;

	for (i = 0; i < (int) strlen(s); i++)
	{
		if ((s[i] < '0' || s[i] > '9') && s[i] != '-')
			return (1);
	}
	return (0);
}
