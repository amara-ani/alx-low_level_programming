#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a pointer containing a copy of the string
 * @str: character
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	int i;
	char *p =  NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	p = malloc(i + 1);
	if (p != NULL)
	{
		for (; i >= 0; i--)
			p[i] = str[i];
	}
	return (p);
}

