#include "main.h"
/**
 * print_diagonal - prints diagonal line till the desired input
 * @n: checker
 * Return: 0 (success)
 */
void print_diagonal(int n)
{
	int i, a;

	i = 1;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			for (a = 1; a < i; a++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			i++;
			_putchar('\n');
		}
	}
}
