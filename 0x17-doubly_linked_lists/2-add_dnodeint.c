#include "lists.h"

/**
 * add_dnodeint -  adds a new node to the start of list
 * @head: head of the double linked list
 * @n: the value of the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
		return (new);

	new->next = *head;
	new->prev = NULL;
	new->n = n;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
