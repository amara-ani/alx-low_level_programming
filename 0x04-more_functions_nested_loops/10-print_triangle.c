#include "main.h"
/**
 * print_triangle - prints triangular shape
 * @size: checker
 * Return: void
 */
void print_triangle(int size)
{
	int space, x, y;

	y = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (y < size)
		{
			space = size - y - 1;
			while (x < size)
			{
				if (space > x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				x++;
			}
			y++;
			x = 0;
			_putchar ('\n');
		}
	}
}
