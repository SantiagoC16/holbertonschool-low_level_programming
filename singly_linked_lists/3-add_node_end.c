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

	while (recorrer != NULL && recorrer->next != NULL)
	{
		recorrer = recorrer->next;
	}

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	lenght = strlen(str);
	recorrer->str = strdup(str);
	recorrer->len = lenght;
	recorrer->next = *head;
	*head = recorrer;
	return (temp);
}
