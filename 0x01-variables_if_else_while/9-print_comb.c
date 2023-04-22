#include <stdio.h>
/**
 * main - printing base 16
 * Return: 0 (success)
 */
int main(void)
{
	int digi;

	for (digi = 0; digi < 10; digi++)
	{
		putchar(digi + '0');
		if (digi != (10 - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
