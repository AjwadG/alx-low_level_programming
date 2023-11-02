#include "hash_tables.h"


/**
 * key_index - get the iondex of the key
 *
 * @key: pointer to first char of key
 * @size: size of the hash table
 *
 * Return: index of key
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
