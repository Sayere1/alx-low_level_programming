#include "lists.h"

/**
 * dlistint_len - length of a dlistint_len
 * @h: the head of dlistint_len
 *
 * Return: the length
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
