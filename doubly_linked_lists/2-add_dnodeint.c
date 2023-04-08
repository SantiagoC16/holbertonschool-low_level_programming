#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @n: constant int
 * @head: pointer to pointer of struct
 * Return: adress of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;
	temp->prev = *head;
	if (head == NULL)
	{
		*head = temp;
	}
	else
	{
		(*head)->prev = temp;
		*head = temp;
	}
	return (temp);
}
