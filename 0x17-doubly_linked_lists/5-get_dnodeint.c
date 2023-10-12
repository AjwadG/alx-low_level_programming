#include "lists.h"

/**
 * get_dnodeint_at_index -  gets node at a given index
 * @head: head of the double linked list
 * @index: index of the node
 * Return: the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; head = head->next, i++)
		;

	if (i == index)
		return (head);
	else
		return (NULL);
}
