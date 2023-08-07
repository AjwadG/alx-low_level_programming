#include "main.h"

/**
 * strtow -  splits a string into array of words
 * @str: a pointer to a string
 *
 * Return: a pointer to the new string or Null if str = NULL
 * or failed to alocate memory or str is empty
 */

char **strtow(char *str)
{
	int i, words, j = 0, tmp = 0, l = len(str);
	char **new = NULL;

	if (l == 1)
		return (NULL);

	words = cheack(new, str, l, 0);
	new = malloc(sizeof(new) * (words + 1));
	new[words] = NULL;
	if (!cheack(new, str, l, 1))
		return (NULL);

	for (i = 0; i < l; i++)
	{
		if (str[i] > 32 && str[i] < 127)
		{
			if (str[i] != ' ' && str[i - 1] == ' ')
				tmp = i;
			new[j][i - tmp] = str[i];
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				new[j][i + 1] = '\0';
				j++;
			}
		}
	}
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


/**
 * cheack - cheaks and alocates the numbers of words
 * @array: pointer to array of pointers
 * @l: lenght of str
 * @str: pointer to string
 * @state: to indecate callcualte or alloc
 *
 * Return: number of words or 0 if faild to alocate
 */
int cheack(char **array, char *str, int l, int state)
{
	int i, tmp = 0, j = 0;

	for (i = 0; i < l; i++)
	{
		if (str[i - 1] == ' ' && str[i] != ' ')
			tmp = i;
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			if (state)
			{
				array[j] = malloc(sizeof(char) * i - tmp + 2);
				if (!array[j])
				{
					while (j--)
					{
						free(array[j]);
					}
					free(array);
					return (0);
				}
			}
			j++;
		};
	}
	return (j);
}
