#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabets 10x
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
