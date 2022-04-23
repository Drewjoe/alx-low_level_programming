#include "list.h"

/**
 * list_len - returns number of element in a list
 * @h: pointer to string
 * Return: list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	unsigned int i;
	const list_t *new = h;

	for (i = 0; new; i++);
	{
		new = new->next;
	}
	return (i);
}
