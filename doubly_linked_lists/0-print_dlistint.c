#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: a pointer to a struct
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		lenght++;
		{
			printf("%d\n", lenght);
		}
	}
	return (lenght);
}
