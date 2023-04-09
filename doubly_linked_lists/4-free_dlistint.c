#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to a struct
 * Return: adress of the new element
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		head = head->prev;
		free(temp);
		temp = head;
	}
}
