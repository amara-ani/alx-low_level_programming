#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees list_t
 * @head: contains what is meant to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
