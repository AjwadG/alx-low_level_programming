#include "main.h"
/**
 * argstostr -  Concatenates all arguments
 * @ac: number of arguments
 * @av: a pointer to the array of arguments
 *
 *
 * Return: a pointer to the new string or Null if av = NULL
 * or failed to alocate memory
 */

char *argstostr(int ac, char **av)
{
	int i, j = 0, tmp = 0, l = 0;
	char *new;

	if (!av)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		l += len(av[i]);
	}
	new = malloc(sizeof(char) * (l + 1));
	if (!new)
		return (NULL);
	for (i = 0; i < l - 1; i++)
	{
		if (av[j][i - tmp])
		{
			new[i] = av[j][i - tmp];
		}
		else
		{
			new[i] = '\n';
			tmp = i + 1;
			j++;
		}
	}
	new[l - 1] = '\n';
	new[l] = '\0';
	return (new);
}

/**
 * len - calculates the lenght of s
 * @s: apointer to string
 *
 * Return: the string of s or 0 if s = NULL
 */
int len(char *s)
{
	if (!s)
		return (1);
	if (s[0])
		return (1 + len(&s[1]));
	else
		return (1);
}
