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
	unsigned long int i = key_index((const unsigned char *)key, ht->size);

	if (!ht)
		return (1);
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
 * Return: address of the new element or NULL
 */
int add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *tmp = malloc(sizeof(hash_node_t));

	if (!tmp)
		return (1);

	tmp->value = strdup(value);
	tmp->next = *head;
	tmp->key = strdup(key);

	*head = tmp;
	return (0);
}
