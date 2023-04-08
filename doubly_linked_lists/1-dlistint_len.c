#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: a pointer to a struct
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		if (h->next == NULL)
		{
			lenght++;
			return (lenght);
		}
		h = h->next;
		lenght++;
	}
	return (lenght);
}
