#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - is a function in the main.h
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
