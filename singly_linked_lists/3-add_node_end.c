#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @str: a pointer
 * @head: pointer to pointer
 * Return: the number of elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int lenght = 0;
	list_t *recorrer;
	list_t *temp;

	recorrer = malloc(sizeof(list_t));
	if (recorrer == NULL)
	{
		return (NULL);
	}

	while (recorrer != NULL && recorrer->next != NULL)
	{
		recorrer = recorrer->next;
	}

	lenght = strlen(str);
	temp->str = strdup(str);
	temp->len = lenght;
	temp->next = *recorrer;
	*recorrer = temp;
	return (temp);
}
