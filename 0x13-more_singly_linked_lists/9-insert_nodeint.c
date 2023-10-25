#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given index
 * @head: address of pointer to first node
 * @idx: index to insert new node
 * @n: n value of new node
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *new_node = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; new_node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = new_node->next;
			new_node->next = new;
			return (new);
		}
			new_node = new_node->next;
	}

	return (NULL);
}
