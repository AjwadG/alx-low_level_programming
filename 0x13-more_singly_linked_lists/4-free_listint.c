#include "lists.h"

/**
 * free_listint - frees the listint_t list
 * @head: a pointer to the head of the struct
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
