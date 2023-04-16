#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the ht to be print?
 * Return: none
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int cont;
	hash_node_t *temp;

	if (ht == NULL)
	{
		return;
	}
	putchar('{');
	for (cont = 0; cont < ht->size; cont++)
	{
		temp = ht->array[cont];
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	putchar('}');
	putchar('\n');
}
