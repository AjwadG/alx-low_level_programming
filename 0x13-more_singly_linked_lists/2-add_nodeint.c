#include "lists.h"


/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 *
 * @head: apointer to a pointer to the head of the struct
 * @n: the number to fill n with
 *
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;

	*head = tmp;
	return (tmp);
}
