#include "main.h"
#include <stdio.h>
/**
 * times_table  - prints the multiplication table
 * Return: void
 */
void times_table(void)
{
	int a, b, result;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = a * b;
			printf("%d", result);
			if (b == 9)
			{
				continue;
			}
			printf(",  ");
		}
		printf("\n");
	}
}
