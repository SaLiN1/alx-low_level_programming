#include "lists.h"

/**
 * add_node_end - adds a new node at the end.
 * @head: head of the list.
 * @str: string to put in new node.
 * Return: address of new node if success.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *actual_node;
	size_t i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new_node->len = i;
	new_node->next = NULL;
	actual_node = *head;

	if (actual_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (actual_node->next != NULL)
			actual_node = actual_node->next;
		actual_node->next = new_node;
	}

	return (*head);
}
