#include "main.h"
/**
 * main - multiplies two positive numbers with no limit.
 * @argc: number of arguments
 * @argv: pointert to array of arguments
 *
 * Return: always (0) or terminate with 98 on eror
 */
int main(int argc, char **argv)
{
	char *final;
	int l[3];

	if (argc != 3 || isNumber(argv[1]) || isNumber(argv[2]))
	{
		print("Error");
		exit(98);
	}

	l[1] = len(argv[1]);
	l[2] = len(argv[2]);
	l[0] = l[2] + l[1] + 1;

	final = malloc(l[0]);
	if (!final)
		return (1);

	init(final, l[0]);
	multi(final, argv[1], argv[2], l);
	print(final);

	free(final);
	exit(0);
}

/**
 * multi - sets all values of s to 0 and the last to '\0'
 * @s0: apointer to array (dest)
 * @s1: apointer to string (first number)
 * @s2: apointer to string (second number)
 * @l: array of s lenghts
 */
void multi(char *s0, char *s1, char *s2, int l[])
{
	int i, j, tmp;

	for (i = l[1] - 1; i >= 0; i--)
	{
		tmp = 0;
		for (j = l[2] - 1; j >= 0; j--)
		{
			tmp += n(s1[i]) * n(s2[j]) + n(s0[j + i + 1]);
			s0[i + j + 1] = tmp % 10 + '0';
			tmp /= 10;
		}
		if (tmp)
			s0[i + j + 1] = tmp + n(s0[j + i + 1]) + '0';
	}
}


/**
 * n - convert cchar to int
 * @c: a char
 * Return: (int) c
 */
int n(char c)
{
	return (c - '0');
}


/**
 * print - prints s using _putchar
 * @s: apointer to string
 */
void print(char *s)
{
	int i, d = 1, l = len(s);

	for (i = 0; i < l; i++)
	{
		if (s[i] == '0' && d)
		{
			continue;
		}
		else
		{
			_putchar(s[i]);
			d = 0;
		}
	}
	if (d)
		_putchar('0');
	_putchar('\n');
}


/**
 * len - calculates the lenght of s
 * @s: apointer to string
 *
 * Return: the lenght of s
 */
int len(char *s)
{
	if (s[0])
		return (1 + len(&s[1]));
	else
		return (0);
}


/**
 * isNumber - checks if s is positive number
 * @s: apointer to string
 *
 * Return: 1 if not a number 0 other wise
 */
int isNumber(char *s)
{
	int i, l = len(s);

	for (i = 0; i < l; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
	}
	return (0);
}


/**
 * init - sets all values of s to 0 and the last to '\0'
 * @s: apointer to string
 * @l: lenght of s
 */
void init(char *s, int l)
{
	int i = 0;

	for (i = 0; i < l - 1; i++)
	{
		s[i] = '0';
	}
	s[l - 1] = '\0';
}
