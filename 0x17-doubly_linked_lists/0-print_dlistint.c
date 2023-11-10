#include "lists.h"

/**
 * print_dlistint - print all the element of a dlistint_t list
 * @h: the head of the linked list
 * Return: num of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
