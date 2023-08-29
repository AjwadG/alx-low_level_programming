#include "lists.h"


/**
 * free_listint_safe - frees a listint_t list
 *
 * @h: apointer to a pointer the struct listint_t
 *
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i;
	listint_t *tmp = NULL, *old, *now;

	if (h == NULL)
		return (0);
	now = *h;
	for (i = 0; now != NULL; i++)
	{
		old = now;
		if (exists(now, tmp))
			break;
		add_nodeint_end(&tmp, now->n);
		now = now->next;
		free(old);
	}
	free_listint(tmp);
	*h = NULL;
	return (i);
}
