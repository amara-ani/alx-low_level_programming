#include <stdio.h>
#include "lists.h"
/**
 * listint_len - prints the number of elements in listint_t
 * @h: pointer to the elements in listint_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
