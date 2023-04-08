#include "lists.h"

/**
 * recorrer - recorre los nodos hasta llegar al ultimo
 * @h: pointer to struct
 * Return: the last node
 */

size_t recorre(const list_t *h)
{
	list_t *recorre = h;

	while (recorre != NULL && recorre->next != NULL)
	{
		recorre = recorre->next;
	}
	return (recorre);
}


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



	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	lenght = strlen(str);
	temp->str = strdup(str);
	temp->len = lenght;
	temp->next = *head;
	*head = temp;
	return (temp);
}
