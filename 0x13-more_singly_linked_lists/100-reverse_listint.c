#include "lists.h"


/**
 * reverse_listint - reverses a listint_t list
 *
 * @head: apointer to apointer the struct listint_t
 * Return: a pointer to the new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before, *node;

	if (!head || !*head)
		return (NULL);
	before = *head;
	node = before->next;
	before->next = NULL;
	while (node)
	{
		*head = node->next;
		node->next = before;
		before = node;
		node = *head;
	}
	*head = before;
	return (*head);
}
