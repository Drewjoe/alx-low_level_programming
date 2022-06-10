#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;
	size_t len;
	
	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
