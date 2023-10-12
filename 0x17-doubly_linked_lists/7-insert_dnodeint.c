#include "lists.h"

/**
 * insert_dnodeint_at_index -  insert node at a given index
 * @h: head of the double linked list
 * @idx: index of the node
 * @n: value of the new node
 * Return: the node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *head = *h, *tmp = NULL;

	for (i = 0; head && i < idx; head = head->next, i++)
		tmp = head;

	if (i == idx)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (new);
		new->n = n, new->prev = NULL, new->next = NULL;
		if (head || tmp || !idx)
		{
			new->next = head;
			if (tmp)
				tmp->next = new;
			else
				*h = new;
			new->prev = tmp;
			if (head)
				head->prev = new;
		}
		return (new);
	}
	else
		return (NULL);
}
