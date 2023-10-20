#include "lists.h"

/**
 * add_node - adds a node to the start of the list
 * @head: head of the linked list.
 * @str: str field of node.
 * Return: address of the head.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;
	unsigned int i = 0;

	while (str[i])
		i++;

	newhead = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	newhead->str = strdup(str);
	newhead->i = i;
	newhead->next = (*head);
	(*head) = newhead;

	return (*head);
}
