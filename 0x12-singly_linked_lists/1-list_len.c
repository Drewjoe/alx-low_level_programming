#include "list.h"

/**
 * list_len - returns number of element in a list
 * @h: pointer to string
 * Return: list
 */
size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h != NULL)
	{
		h = h->next;
		e++;
	}
	return (e);

}
