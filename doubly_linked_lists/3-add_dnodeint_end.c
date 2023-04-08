#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @n: constant int
 * @head: pointer to pointer of struct
 * Return: adress of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (last == NULL)
	{
		return (NULL);
	}
	last->n = n;

	if (*head == NULL)
	{
		last->prev = NULL;
		last->next = NULL;
		*head = last;
		return (last);
	}
	else
	{
		while (temp->next != NULL)
		{
		temp = temp->next;
		}
		temp->prev = *head;
		temp->next = NULL;
	}
	return (temp);
}
