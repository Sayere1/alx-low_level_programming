#include "lists.h"

/**
 * free_dlistint - free dlistint_t
 * @head: head of dlistint_t
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *del;

	while (head != NULL)
	{
		del = head->next;
		free(head);
		head = del;
	}
}
