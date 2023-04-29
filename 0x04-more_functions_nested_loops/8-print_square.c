#include "main.h"
/**
 * print_square - prints asquare
 * @size: checker
 * Return: void
 */
void print_square(int size)
{
	int i, a;

	i = 1;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
			for (a = 1; a <= size; a++)
			{
				_putchar('#');
			}
			i++;
			_putchar('\n');
		}
	}
}
