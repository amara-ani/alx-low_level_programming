#include <stdio.h>
/**
 * main - printing alphabets in reverse order
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch = ch - 1;
	}
	putchar('\n');
	return (0);
}
