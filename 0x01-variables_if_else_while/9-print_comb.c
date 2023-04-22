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
		if (dig != (10 - 1))
		{
			putchar(dig + '0');
			putchar(',');
		}
		if (dig == (10 - 1))
		{
			putchar(dig + '0');
		}
	}
	putchar('\n');
	return (0);
}
