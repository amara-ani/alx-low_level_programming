#include "main.h"
#include <stdio.h>
/**
 * puts_half - it starts printing from half of the length
 * @str: holds the string
 * Return: void
 */
void puts_half(char *str)
{
	int a, b, n;

	for (a = 0; str[a] != 0; a++)
	{
	}
	n = (a - 1) / 2;
	if (n % 2 == 0)
	{
		for (b = n + 1 ; str[b] != 0; b++)
		{
			_putchar(str[b]);
		}
	}
	else
	{
		_putchar(str[a - 1]);
	}
	_putchar('\n');
}
