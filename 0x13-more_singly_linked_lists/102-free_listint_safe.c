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
	size_t i, count = 0;
	listint_t *tmp = NULL, *old, *now, *loop;

	if (h == NULL)
		return (0);
	now = *h;
	loop = find_loop(*h);
	for (i = 0; now != NULL; i++)
	{
		old = now;
		if (now == loop)
		{
			if (count)
				break;
			count++;
		}
		add_nodeint_end(&tmp, now->n);
		now = now->next;
		free(old);
	}
	free_listint(tmp);
	*h = NULL;
	return (i);
}

/**
 * find_loop - finds the loop in  a listint_t list
 *
 * @head: a pointer the struct listint_t
 *
 * Return: a pointer to the loop or NULL
 */
listint_t *find_loop(listint_t *head)
{
	listint_t *tmp1, *tmp2;

	if (!head)
		return (head);
	tmp1 = head;
	while (tmp1)
	{
		tmp2 = head;
		while (tmp2)
		{
			if (tmp2 == tmp1->next)
				return (tmp2);
			if (tmp1 == tmp2)
				break;
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
	return (tmp1);
}
