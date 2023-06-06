#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * lent - length of the string
 * @i: checker
 * Return: length
 */
int lent(const char *i)
{
	int a;

	for (a = 0; i[a]; a++)
		;
	return (a);
}
/**
 * add_node - adds new node at the beginning of list_t
 * @head: holds address of list_t
 * @str: holds the string of list_t
 * Return: address of new element or Null(fail)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int lentt;
	char *hold;

	lentt = lent(str);
	if (str == NULL || head == NULL)
	{
		return (NULL);
	}
	new = *head;
	hold = malloc((lentt) * sizeof(char));
	hold = strdup(str);
	if (hold == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(hold);
		free(new);
		return (NULL);
	}
	new->len = lentt;
	new->str = hold;
	new->next = *head;
	*head = new;
	return (new);
}
