#include "main.h"
#include <stdio.h>
/**
 * print_rev - reverses a string
 * @s: holds the string
 * Return: void
 */
void print_rev(char *s)
{
	int a, b;

	for (a = 0; s[a] != 0; a++)
	{
	}
	for (b = a - 1; s[b] != 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
