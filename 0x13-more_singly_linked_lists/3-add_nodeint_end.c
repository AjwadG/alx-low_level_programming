#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: apointer to a pointer to the head of the struct
 * @n: the number to fill n with
 *
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *end = malloc(sizeof(listint_t));

	if (!end)
		return (NULL);
	end->n = n;
	end->next = NULL;

	if (*head)
	{
		for (tmp = *head; tmp->next; tmp = tmp->next)
			;
		tmp->next = end;
	}
	else
	{
		*head = end;
	}
	return (end);
}
