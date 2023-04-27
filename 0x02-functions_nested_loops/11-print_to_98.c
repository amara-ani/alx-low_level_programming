#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints any numberto 98
 * @n: character used
 * Return: value
 */
void print_to_98(int n)
{
	int i;

	i = n;
	if (i > 98)
	{
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i--;
		}
		printf("\n");
	}
	else
	{
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i++;
		}
		printf("\n");
	}
}
