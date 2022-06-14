#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node in a doubly-linked list
 * @h: pointer to the beginning of the list
 * @idx: the index at which to insert a node
 * @n: the data to insert
 * Return: NULL If memory allocation fails or pointer to the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *new = NULL;

	if (!idx)
		return (add_dnodeint(h, n));
	if (!h)
		return (NULL);
	prev = *h;
	if (!prev)
		return (NULL);
	while (--idx && prev->next)
		prev = prev->next;
	new->n = n;
	new->prev = prev;
	new->next = prev->next;
	prev->next = new;
	if (prev->next)
		prev->next->prev = new;
	prev->next = new;

	return (new);
}





