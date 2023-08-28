#include "lists.h"


/**
 * listint_len - counts the number of elements of a listint_t list
 *
 * @h: apointer to the head of the listint_t
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++, h = h->next)
		;
	return (i);
}
