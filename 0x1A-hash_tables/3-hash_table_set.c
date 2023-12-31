#include "hash_tables.h"


/**
 * hash_table_set - add elemt to hash table
 *
 * @ht: ponter to teh hash table
 * @key: pointer to key
 * @value: pointer to value
 *
 * Return: 1 if succeeded 0 other wise
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;

	if (!ht || !key || strlen(key) == 0)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	if (add_node(&ht->array[i], key, value))
		return (0);
	return (1);
}


/**
 * add_node - adds a new node at the beginning of the list
 *
 * @head: ponter to linked list
 * @key: pointer to key
 * @value: pointer to value
 *
 * Return: 0 if succeded 1 otehr wise
 */
int add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *tmp;

	for (tmp = *head; tmp; tmp = tmp->next)
	{
		if (!strcmp(key, tmp->key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (0);
		}
	}



	tmp = malloc(sizeof(hash_node_t));
	if (!tmp)
		return (1);

	tmp->value = strdup(value);
	tmp->next = *head;
	tmp->key = strdup(key);

	*head = tmp;
	return (0);
}
