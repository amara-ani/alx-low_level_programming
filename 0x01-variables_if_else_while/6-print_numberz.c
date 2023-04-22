#include <stdio.h>
/**
 * main - printing alphabets in lowercase
 * Return : 0 (success)
 */
int main(void)
{
	int ch;

	ch = 0;
	while (ch < 10)
	{
		putchar('0' + ch);
		ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
