#include <stdio.h>
#include "lists.h"
/**
 * list_len - number of elements in list_t
 * @h: holds the contents of list_t
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		h = h->next;
	}
	return (a);
}
