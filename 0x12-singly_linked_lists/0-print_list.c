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
	const list_t *new = h;

	for (i = 0; new; i++)
	{
		if (new->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", new->len, new->str);
		new = new->next;
		len++;
	}
	return (len);
}
