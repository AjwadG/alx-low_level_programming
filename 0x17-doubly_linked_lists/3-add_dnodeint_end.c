#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node to the end of list
 * @head: head of the double linked list
 * @n: the value of the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *tmp;

	if (!new || !head)
		return (new);

	new->next = NULL;
	new->n = n;
	if (*head)
	{
		for (tmp = *head; tmp->next; tmp = tmp->next)
			;
		tmp->next = new;
		new->prev = tmp;
	}
	else
	{
		*head = new;
		new->prev = NULL;

	}

	return (new);
}
