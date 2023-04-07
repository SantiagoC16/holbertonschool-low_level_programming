#include "lists.h"

/**
 * print_list - Write a function that prints all the elements of a list_t list
 * @h: pointer to a struct
 * Return: the numberof nodes
 */

size_t print_list(const list_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		lenght++;
	}
	return (lenght);
}
