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
	new->shead = NULL;
	new->stail = NULL;
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
	shash_node_t *tmp, *ptr;
	unsigned long int i;

	if (!ht)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	for (tmp = ht->array[i]; tmp; tmp = tmp->next)
	{
		if (!strcmp(key, tmp->key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
	}
	tmp = malloc(sizeof(shash_node_t));
	if (!tmp)
		return (0);
	tmp->value = strdup(value), tmp->next = ht->array[i], tmp->sprev = NULL;
	tmp->snext = NULL, tmp->key = strdup(key), ht->array[i] = tmp;
	if (!ht->shead)
		ht->shead = tmp, ht->stail = tmp;
	else
	{
		for (ptr = ht->shead; ptr; ptr = ptr->snext)
		{
			if (strcmp(tmp->key, ptr->key) < 0)
			{
				tmp->sprev = ptr->sprev, tmp->snext = ptr, ptr->sprev = tmp;
				if (tmp->sprev)
					tmp->sprev->snext = tmp;
				break;
			}
		}
		if (!tmp->snext)
			tmp->sprev = ht->stail, ht->stail->snext = tmp, ht->stail = tmp;
		else if (!tmp->sprev)
			ht->shead = tmp;
	}
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
	shash_node_t *tmp;
	unsigned long int i;

	if (!ht)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	for (tmp = ht->array[i]; tmp; tmp = tmp->next)
	{
		if (!strcmp(key, tmp->key))
		{
			return (tmp->value);
		}
	}

	return (NULL);
}

/**
 * shash_table_print - prints shash table
 *
 * @ht: ponter to the shash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int first = 0;

	if (!ht)
		return;
	putchar('{');
	for (tmp = ht->shead; tmp; tmp = tmp->snext)
	{
		if (first++)
		{
			putchar(',');
			putchar(' ');
		}
		printf("'%s': '%s'", tmp->key, tmp->value);
	}
	putchar('}');
	putchar('\n');
}

/**
 * shash_table_print_rev - prints shash table in reverse
 *
 * @ht: ponter to the shash table
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int first = 0;

	if (!ht)
		return;
	putchar('{');
	for (tmp = ht->stail; tmp; tmp = tmp->sprev)
	{
		if (first++)
		{
			putchar(',');
			putchar(' ');
		}
		printf("'%s': '%s'", tmp->key, tmp->value);
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
	shash_node_t *tmp, *tmp1;

	if (!ht)
		return;
	for (tmp = ht->shead; tmp; tmp = tmp1)
	{
		tmp1 = tmp->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}

	free(ht->array);
	free(ht);
}
