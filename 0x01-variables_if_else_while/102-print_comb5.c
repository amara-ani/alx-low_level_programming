#include <stdio.h>
/**
 * main - printing base 16
 * Return: 0 (success)
 */
int main(void)
{
	int digi, ch;

	for (digi = 0; digi < 99; digi++)
	{
		for (ch = digi + 1; ch < 100; ch++)
		{
			putchar((digi / 10) + '0');
			putchar((digi % 10) + '0');
			putchar(' ');
			putchar((ch / 10) + '0');
			putchar((ch % 10) + '0');
			if ((digi == 98) && (ch == 99))
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
