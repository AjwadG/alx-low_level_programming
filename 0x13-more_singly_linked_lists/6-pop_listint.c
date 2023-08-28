#include "lists.h"


/**
 * pop_listint - deletes the head
 *
 * @head: apointer to a pointer to the head of the struct
 *
 * Description: deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 *
 * Return: address of the new element or NULL
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = tmp->next;

	free(tmp);

	return (n);
}
