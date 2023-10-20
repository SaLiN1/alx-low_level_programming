#include "lists.h"

/**
 * add_node - adds a node to the start of the list
 * @head: head of the linked list.
 * @str: str field of node.
 * Return: address of the head.
*/

list_t *add_node(list_t **head, const char *str)
{
	size_t i;

	list_t *new_head = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
