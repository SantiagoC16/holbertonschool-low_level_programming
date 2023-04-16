#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @key: is the key
 * @ht: is the hash table you want to look into
 * Return: the value associated with the element, or NULL if key cant be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
	{
		return (NULL);
	}
	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
