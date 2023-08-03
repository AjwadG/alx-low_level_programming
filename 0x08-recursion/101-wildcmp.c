#include "main.h"

/**
 * cheack - search for char
 * @s: pointer to string
 * @c: char to cheack
 * Return: 0 if char exist 1 otherwise
 */
int cheack(char *s, char c)
{
	if (!s[0])
		return (1);
	else if (s[0] == c)
		return (0);
	return (cheack(&s[1], c));
}

/**
 * wildcmp - function
 * @s1: a pointer the string to check
 * @s2: a pointer to a string regx like
 *
 * Description: compares two strings in regx style wildcars.
 *
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (s2[0] == '*' && s2[0] == s2[1])
		return (wildcmp(s1, &s2[1]));
	else if (s1[0] == s2[0] && s1[0] == '\0')
		return (1);
	else if (s1[0] == s2[0])
		return (wildcmp(&s1[1], &s2[1]));
	else if (s1[0] == s2[1] &&
			(cheack(&s1[1], s1[0])
			 || s2[2] == '*'))
		return (wildcmp(s1, &s2[1]));
	else if (s1[0] != s2[0] && s2[0] != '*')
		return (0);
	else
		return (wildcmp(&s1[1], s2));
}
