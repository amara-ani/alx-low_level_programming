#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - print an array of char
 * @size: size of an array
 * @c: array itself
 * Return: 0 (success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p =  NULL;

	if (size > 0)
	{
		p = malloc(size * sizeof(char));
		if (p != NULL)
		{
			for (i = 0; i < size; i++)
			{
				p[i] = c;
			}
		}
	}
	return (p);
}

