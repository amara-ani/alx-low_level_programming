#include <stdio.h>
/**
 * main - printing base 16
 * Return: 0 (success)
 */
int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
	{
		putchar(dig + '0');
		if (dig != (10 - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
