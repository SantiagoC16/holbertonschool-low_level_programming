#include "hash_tables.h"

/**
 * hash_table_set - is a function that adds an element to the hash table
 * @key: is the key
 * @value: is the value associated with the key
 * @ht: is the hash table you want to add or update the key/value to
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp;
	unsigned long int i;
	char value2;
	char key2;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	i = key_index((unsigned char *) key, ht->size);

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
	{
		return (0);
	}

	return (1);
}
