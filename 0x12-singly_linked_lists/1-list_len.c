#include "lists.h"

/**
 * list_len - counts the number of nodes in a linked list.
 * @h: A pointer to the head of the list_t list
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t c;

	c = 0;
	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
