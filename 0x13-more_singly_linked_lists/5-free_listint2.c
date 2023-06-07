#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees list_t and sets head to NULL
 * @head: contains what is meant to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
