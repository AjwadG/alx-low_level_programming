#include "lists.h"


/**
 * insert_nodeint_at_index - insert node in a given index
 *
 * @head: apointer to apointer the struct listint_t
 * @idx: the index to insert in
 * @n: the value of the node
 * Return: the value at index or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *before = NULL, *new;

	if (head == NULL)
		return (NULL);
	node = *head;
	while (i < idx && node != NULL)
	{
		before = node;
		node = node->next;
		i++;
	}

	if (i == idx)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = node;
		if (i == 0)
			*head = new;
		else
			before->next = new;
		return (new);
	}

	return (NULL);
}
