#include "list.h"

/**
 * list_len - returns number of element in a list
 * @h: pointer to string
 * Return: list
 */
size_t list_len(const list_t *h)
{
	unsigned int i;
	
	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
