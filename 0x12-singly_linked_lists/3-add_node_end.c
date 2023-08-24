#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: apointer to a pointer to the head of the struct
 * @str: the string to fill str with
 *
 * Return: address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *end = malloc(sizeof(list_t));

	if (!end)
		return (NULL);
	end->str = strdup(str);
	end->next = NULL;
	end->len = len(str);

	if (*head)
	{
		for (tmp = *head; tmp->next; tmp = tmp->next)
			;
		tmp->next = end;
	}
	else
	{
		*head = end;
	}
	return (end);
}
