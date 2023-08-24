#include "lists.h"


/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: apointer to the struct list_t
 *
 *
 * Return: the number of nudes
 *
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++, h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	}
	return (i);
}

/**
 * len - calculates the len of string
 * @s: pointer to string
 * Return: the lenght of the string
 */
int len(const char *s)
{
	if (!s || !*s)
		return (0);
	else
		return (1 + len(&s[1]));
}
