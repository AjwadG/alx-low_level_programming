#include "hash_tables.h"


/**
 * hash_table_create - crates a hash table
 *
 * @size: size of hash table array
 *
 *
 * Return: pointer to the new table or NULL
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (!new)
		return (new);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (!new->array)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
