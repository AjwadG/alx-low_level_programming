#include "lists.h"

/**
 * free_list - frees the list_t list
 * @head: a pointer to the head of the struct
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp)
	{
		tmp = tmp->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
