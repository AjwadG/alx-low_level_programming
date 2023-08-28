#include "lists.h"


/**
 * get_nodeint_at_index - gets the (n)th node of listint_t list
 *
 * @head: apointer to the struct listint_t
 * @index: the index to get the value from
 * Return: the value at index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (head);
	for (i = 0; head != NULL && i < index; i++, head = head->next)
	;

	if (i == index)
		return (head);
	return (NULL);
}
