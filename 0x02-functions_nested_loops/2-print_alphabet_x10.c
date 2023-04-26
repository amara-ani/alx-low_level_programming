#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10x
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int ch;
	char i;

	ch = 0;
	while (ch < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		ch++;
	}
}
