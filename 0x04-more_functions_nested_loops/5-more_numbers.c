#include "main.h"
/**
 * more_numbers - prints numbers 10 times of any result
 * Return: void
 */
void more_numbers(void)
{
	int i, count;

	count = 1;
	while (count <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
				_putchar((i % 10) + '0');
		}
		_putchar('\n');
		count++;
	}
}
