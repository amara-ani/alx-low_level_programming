#include <stdio.h>
#include "lists.h"
/**
 * print_listin - prints all elements of listint_t
 * @h: pointer to the elements in listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
