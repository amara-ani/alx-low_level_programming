#include <stdio.h>
/**
 * main - printing base 16
 * Return: 0 (success)
 */
int main(void)
{
	char ch;
	int dig;

	for (dig = 0; dig < 10; dig++)
		putchar(dig + '0');
	for (ch = 'a'; ch < 'g'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
