#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: holds the string
 * Return: void
 */
void rev_string(char *s)
{
	int a, b, c, container;

	for (a = 0; s[a] != 0; a++)
	{
	}
	c = 0;
	for (b = a - 1; c < b; c++)
	{
		container = s[b];
		s[b] = s[c];
		s[c] = container;
		b--;
	}
}
