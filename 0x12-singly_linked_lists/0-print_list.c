#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of list_t
 * @h: holds what needs to be printed
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t a;
	char *b;

	for (a = 0; h; a++)
	{
		b = h->str;
		if (b == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (a);
}
