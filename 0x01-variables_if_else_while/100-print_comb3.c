#include <stdio.h>
/**
 * main - printing base 16
 * Return: 0 (success)
 */
int main(void)
{
	int digi, ch;

	for (digi = 0; digi < 9; digi++)
	{
		for (ch = 1; ch < 10; ch++)
		{
			putchar(digi + '0');
			putchar(ch + '0');
			if (digi == (9 - 1) && ch == (10 - 1))
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
