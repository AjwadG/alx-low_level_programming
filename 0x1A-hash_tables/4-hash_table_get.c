#include "hash_tables.h"


/**
 * hash_table_get - get elemnt from hash table
 *
 * @ht: ponter to teh hash table
 * @key: pointer to key
 *
 * Return: value or NULL
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	char *value;

	if (!ht)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (get_node(&ht->array[i], key, &value))
		return (NULL);

	return (value);
}


/**
 * get_node - get node using the value
 *
 * @head: ponter to linked list
 * @key: pointer to key
 * @value: pointer to value
 *
 * Return: 0 if succeeded 1 other wise
 */
int get_node(hash_node_t **head, const char *key, char **value)
{
	hash_node_t *tmp;


	for (tmp = *head; tmp; tmp = tmp->next)
	{
		if (!strcmp(key, tmp->key))
		{
			*value = tmp->value;
			return (0);
		}
	}
	return (1);
}
