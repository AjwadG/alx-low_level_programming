#include "lists.h"


/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: apointer to a pointer to the head of the struct
 * @str: the string to fill str with
 *
 * Return: address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));

	if (!tmp)
		return (NULL);

	tmp->str = strdup(str);
	tmp->next = *head;
	tmp->len = len(str);

	*head = tmp;

	return (tmp);
}
