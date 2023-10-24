#include "lists.h"

/**
 * pop_listint - pops head node of list
 * @head: address of pointer to first node
 *
 * Return: value of popped node
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (*head == NULL)
		return (0);

	node = *head;
	node = (*head)->n;
	*head = (*head)->next;

	free(node);
	return (i);
}
