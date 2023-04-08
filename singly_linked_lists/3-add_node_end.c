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
	list_t *last;
	list_t *temp;

	last = malloc(sizeof(list_t));
	if (last == NULL)
	{
		return (NULL);
	}
	lenght = strlen(str);
	last->str = strdup(str);
	last->len = lenght;
	last->next = NULL;

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = last;
	return (temp);
}
