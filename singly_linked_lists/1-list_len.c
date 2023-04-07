#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: pointer to a struct
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		if (h->next == NULL)
		{
			lenght++;
			return (0 elements);
		}
		h = h->next;
		lenght++;
	}
	return (lenght);
}
