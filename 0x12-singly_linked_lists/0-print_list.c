#include "lists.h"

/**
 * print_list - prints all the element of a list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	unsigned int i;
	const list_t *c = h;

	for (i = 0; c; i++)
	{
		if (new->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", c->len, c->str);
		c = c->next;
		len++;
	}
	return (len);
}
