#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees list_t and sets head to NULL
 * @head: contains what is meant to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	while (*head)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
	}
	free(*head);
	*head = NULL;
}
