#include "lists.h"


/**
 * list_len - counts the number of elements of a list_t list
 *
 * @h: apointer to the head of the list_t
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++, h = h->next)
		;
	return (i);
}
