#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node to a position
 * @head: checker
 * @idx: index
 * @n: data
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	tmp = *head;
	idx--;
	while (i != idx)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
		idx --;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
