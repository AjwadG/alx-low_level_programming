#include "lists.h"


/**
 * sum_listint - calculates the sum of values of list
 *
 * @head: apointer to the struct listint_t
 * Return: the sum of all values in a list
 */
int sum_listint(listint_t *head)
{
	int i, sum = 0;

	for (i = 0; head != NULL; i++, head = head->next)
	{
		sum += head->n;
	}

	return (sum);
}
