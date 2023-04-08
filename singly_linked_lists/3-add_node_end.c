#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @str: a pointer
 * @head: pointer to pointer
 * Return: the number of elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
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
	temp->str = strdup(str);
	temp->len = lenght;
	temp->next = *head;
	*head = recorrer;
	return (temp);
}
