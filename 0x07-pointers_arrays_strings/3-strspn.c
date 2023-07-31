#include "main.h"
/**
 * _strspn - function
 *
 * @s: a pointer to a string.
 * @accept: a pointer to a string
 *
 * Description: gets the length of a prefix substring.
 *
 * Return: number of bytes in the initial segment of (s) which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, tmp = 1;
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (tmp == 0)
			break;
		tmp = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				tmp++;
				break;
			}
		}
	}
	return (n);
}
