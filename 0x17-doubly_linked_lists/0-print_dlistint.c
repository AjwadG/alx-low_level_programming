#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head of the double linked list
 * Return: the number of nudes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++, h = h->next)
		printf("%d\n", h->n);
	return (i);
}
