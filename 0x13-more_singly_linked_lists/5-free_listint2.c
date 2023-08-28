#include "lists.h"

/**
 * free_listint2 - frees the listint_t list
 * @head: a pointer to the head of the struct
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
