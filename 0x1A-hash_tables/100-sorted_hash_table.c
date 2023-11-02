#include "hash_tables.h"


/**
 * shash_table_create - crates a shash table
 *
 * @size: size of shash table array
 *
 *
 * Return: pointer to the new table or NULL
 *
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new = malloc(sizeof(shash_table_t));

	if (!new)
		return (new);
	new->size = size;
	new->array = malloc(sizeof(shash_node_t *) * size);
	if (!new->array)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);
}


/**
 * shash_table_set - add elemt to shash table
 *
 * @ht: ponter to teh shash table
 * @key: pointer to key
 * @value: pointer to value
 *
 * Return: 1 if succeeded 0 other wise
 *
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;

	if (!ht)
		return (1);
	i = key_index((const unsigned char *)key, ht->size);
	if (add_node(&ht->array[i], key, value))
		return (0);
	return (1);
}


/**
 * shash_table_get - get elemnt from shash table
 *
 * @ht: ponter to teh shash table
 * @key: pointer to key
 *
 * Return: value or NULL
 *
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
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
 * shash_table_print - prints shash table
 *
 * @ht: ponter to the shash table
 *
 */
void shash_table_print(const shash_table_t *ht)
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
 * shash_table_delete - prints shash table
 *
 * @ht: ponter to the shash table
 *
 */
void shash_table_delete(shash_table_t *ht)
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
