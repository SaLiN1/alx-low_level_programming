#include "lists.h"

/**
 * add_node - adds a node to the start of the list
 * @head: head of the linked list.
 * @str: str field of node.
 * Return: address of the head.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nh;
	unsigned int i = 0;

	while (str[i])
		i++;

	nh = malloc(sizeof(list_t));
	if (!nh)
		return (NULL);

	nh->str = strdup(str);
	nh->len = i;
	nh->next = (*head);
	(*head) = nh;

	return (*head);
}
