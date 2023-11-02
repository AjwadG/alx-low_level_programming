#include "hash_tables.h"


/**
 * hash_table_delete - prints hash table
 *
 * @ht: ponter to the hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			free_node(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}


/**
 * free_node - free linked list
 *
 * @head: ponter to linked list
 *
 * Return: 0 if succeeded 1 other wise
 */
void free_node(hash_node_t *head)
{
	hash_node_t *tmp, *tmp1;

	for (tmp = head; tmp; tmp = tmp1)
	{
		tmp1 = tmp->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}
