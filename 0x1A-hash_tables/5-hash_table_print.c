#include "hash_tables.h"


/**
 * hash_table_print - prints hash table
 *
 * @ht: ponter to the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first = 0;

	if (!ht)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			print_node(ht->array[i], &first);
		}
	}
	putchar('}');
	putchar('\n');
}


/**
 * print_node - prints nodes values
 *
 * @head: ponter to linked list
 * @first: bool if the value is the first value
 *
 * Return: 0 if succeeded 1 other wise
 */
void print_node(hash_node_t *head, int *first)
{
	hash_node_t *tmp;

	for (tmp = head; tmp; tmp = tmp->next)
	{
		if (*first)
		{
			putchar(',');
			putchar(' ');
		}
		else
			*first = 1;
		printf("'%s': '%s'", tmp->key, tmp->value);
	}
}
