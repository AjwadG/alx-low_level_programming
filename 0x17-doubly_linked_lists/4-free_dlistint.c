#include "lists.h"

/**
 * free_dlistint -  frees all of the linked list
 * @head: head of the double linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
