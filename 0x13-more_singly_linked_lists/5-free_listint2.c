#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer of lists
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			node = *head;
			free(node);
			*head = (*head)->next;
		}

		*temp = NULL;
	}
}
