#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: a pointer to a struct
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		if (h->prev == NULL)
		{
			length = length->n;
			return (length);
		}
		if (h->next == NULL)
		{
			length = lenght->n;
			return (length);
		}
	lenght++;
	printf("%d elements", lenght);
	}
	return (lenght);
}
