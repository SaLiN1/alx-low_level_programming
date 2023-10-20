#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the list.
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *existing_node;

	if (!head)
		return;

	while ((existing_node = head) != NULL)
	{
		head = head->next;
		free(existing_node->str);
		free(existing_node);
	}
}
