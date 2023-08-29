#include "lists.h"


/**
 * find_listint_loop - frees a listint_t list
 *
 * @head: a pointer the struct listint_t
 *
 * Return: a pointer to the loop or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp = NULL;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		if (exists(head, tmp))
			return (head);
		add_nodeint_end(&tmp, head->n);
		head = head->next;
	}
	free_listint(tmp);
	return (NULL);
}
