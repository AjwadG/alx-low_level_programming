#include "lists.h"


/**
 * print_listint_safe - prints all the elements of a listint_t list
 *
 * @head: apointer to the struct listint_t
 *
 * Return: the number of nudes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	listint_t *tmp = NULL;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++, head = head->next)
	{
		if (exists(head, tmp))
		{
			printf("-> [%p] %d\n", (void *) head, head->n);
			break;
		}
		add_nodeint_end(&tmp, head->n);
		printf("[%p] %d\n", (void *) head, head->n);
	}
	free_listint(tmp);
	return (i);
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: apointer to a pointer to the head of the struct
 * @n: the number to fill n with
 *
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *end = malloc(sizeof(listint_t));

	if (!end)
		exit(98);
	end->n = n;
	end->next = NULL;

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
/**
 * exists - cheks if it exists
 *
 * @pace: apointer to a pointer to the head of the struct
 * @head:  apointer to a pointer to the head of the struct
 *
 * Return: 1 if found 0 otehr wise
 */

int exists(const listint_t *pace, listint_t *head)
{
	while (head)
	{
		if (head->n == pace->n)
			return (1);
		head = head->next;
	}
	return (0);
}
/**
 * free_listint - frees the listint_t list
 * @head: a pointer to the head of the struct
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
