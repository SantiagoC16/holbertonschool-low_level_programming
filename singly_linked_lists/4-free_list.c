#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list
 * @head: pointer to a struct
 * Return: o
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
