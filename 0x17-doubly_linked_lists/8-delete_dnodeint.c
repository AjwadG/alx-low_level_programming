#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes node at a given index
 * @head: head of the double linked list
 * @index: index of the node
 * Return: 1 if succeeded -1 other wise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr = *head, *tmp = NULL;

	for (i = 0; ptr && i < index; ptr = ptr->next, i++)
		tmp = ptr;

	if (i == index && ptr)
	{
		if (tmp)
			tmp->next = ptr->next;
		if (ptr->next)
			ptr->next->prev = tmp;
		if (i == 0)
			*head = ptr->next;
		free(ptr);
		return (1);
	}
	else
		return (-1);
}
