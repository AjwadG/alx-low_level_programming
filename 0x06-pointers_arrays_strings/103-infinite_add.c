#include "main.h"

/**
 * infinite_add - fucntion
 * @n1: a pointer to to number in string format
 * @n2: a pointer to to number in string format
 * @r: a pointer to a final result
 * @size_r: is the size of r
 *
 * Description: adds two numbers with no cap or over flow
 *
 * Return: 0 if the number is pigger then the puffer or apointer to final
 * string of numbers
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, l, tmp = 0, l1 = _strlen(n1), l2 = _strlen(n2);

	if (l1  >= size_r - 1 || l2 >= size_r - 1)
		return (0);

	l = l1 > l2 ? l1 : l2;

	for (i = 1; i <= l + 1; i++)
	{
		if (l1 - i >= 0)
			tmp += n1[l1 - i] - '0';
		if (l2 - i >= 0)
			tmp += n2[l2 - i] - '0';

		r[l - i + 1] = tmp % 10 + '0';

		tmp /= 10;
	}
	r[l - i] = tmp;
	r[l + 1] = '\0';
	if (r[0] == '0')
	{
		for (i = 1; r[i - 1] != '\0'; i++)
		{
			r[i - 1] = r[i];
		}
	}
	return (r);
}

/**
 * _strlen -  function
 * @s: pointer to to string
 * Description: returns the length of the string s
 *
 * Return: the lenght of s
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
