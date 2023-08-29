#include "lists.h"


/**
 * delete_nodeint_at_index - delete node in a given index
 *
 * @head: apointer to apointer the struct listint_t
 * @index: the index to deletet from
 * Return: the value at index or NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node, *before = NULL;

	if (head == NULL)
		return (-1);
	node = *head;
	while (i < index && node != NULL)
	{
		before = node;
		node = node->next;
		i++;
	}

	if (i == index && node)
	{

		if (i == 0)
			*head = node->next;
		else
			before->next = node->next;
		free(node);
		return (1);
	}

	return (-1);
}
