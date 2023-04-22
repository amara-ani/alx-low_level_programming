#include <stdio.h>
/**
 * main - printing base 16
 * Return: 0 (success)
 */
int main(void)
{
	int digi, ch, data;

	for (digi = 0; digi < 8; digi++)
	{
		for (ch = digi + 1; ch < 9; ch++)
		{
			for (data = ch + 1; data < 10; data++)
			{
				putchar(digi + '0');
				putchar(ch + '0');
				putchar(data + '0');
				if ((digi == 7) && (ch == 8) && (data == 9))
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
