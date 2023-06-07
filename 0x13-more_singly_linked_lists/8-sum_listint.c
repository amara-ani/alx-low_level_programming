#include "lists.h"
/**
 * sum_listint - sums all elements 
 * @head: pointer to address of element
 * Return: sum (success)
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		if (head == NULL)
		{
			return (0);
		}
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
