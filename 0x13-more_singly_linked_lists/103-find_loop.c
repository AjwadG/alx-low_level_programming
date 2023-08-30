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
	listint_t *tmp1, *tmp2;

	if (!head)
		return (head);
	tmp1 = head;
	while (tmp1)
	{
		tmp2 = head;
		while (tmp2)
		{
			if (tmp2 == tmp1->next)
				return (tmp2);
			if (tmp1 == tmp2)
				break;
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
	return (tmp1);
}
