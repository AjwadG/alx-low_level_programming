#include "lists.h"

/**
 * sum_dlistint -  sum of all the data (n) of a list
 * @head: head of the double linked list
 * Return: the sum of all nodes values (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; sum += head->n, head = head->next)
		;

	return (sum);
}
