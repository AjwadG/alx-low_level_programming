#include "main.h"

/**
 * rot13 - fucntion
 * @s: a pointer to a string
 *
 * Description: encodes a string into 1337.
 *
 * Return: a pointer to the final string
 */

char *rot13(char *s)
{
	int i, j;
	char *sc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *fc = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sc[j] != '\0'; j++)
		{
			if (s[i] == sc[j])
			{
				s[i] = fc[j];
				break;
			}
		}
	}
	return (s);
}
