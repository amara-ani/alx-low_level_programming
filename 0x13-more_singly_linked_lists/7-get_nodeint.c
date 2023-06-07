#include "lists.h"
/**
 * get_nodeint_at_index - gets the position of an element of lists_t
 * @head: address of the pointer
 * @index: the position of the pointer
 * Return: head (success) or NULL (fail)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i != index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
		index--;
	}
	return (head);
}
