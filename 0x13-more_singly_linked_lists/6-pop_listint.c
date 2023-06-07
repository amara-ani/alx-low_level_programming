#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes head of list_t
 * @head: pointer
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	new = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(new);
	return (i);
}
