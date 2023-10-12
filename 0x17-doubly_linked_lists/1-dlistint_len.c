#include "lists.h"

/**
 * dlistint_len - cal the elemnts in a dlistint_t list
 * @h: head of the double linked list
 * Return: the number of nudes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++, h = h->next)
		;
	return (i);
}
