#include "lists.h"

/**
 * add_node - adds a node to the start of the list
 * @head: head of the linked list.
 * @str: str field of node.
 * Return: address of the head.
*/
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL || str[0] == '\0' || strlen(str) > MAX_STRING_LENGTH)
		return (NULL);

	list_t *new;
	unsigned int i = strlen(str);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = i;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

