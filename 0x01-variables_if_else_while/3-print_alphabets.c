#include <stdio.h>
/**
 * main - printing alphabets in lowercase and uppercase
 * Return : 0 (success)
 */
int main(void)
{
	char ch, c;

	ch = 'a';
	c = 'A';
	while (c <= 'Z')
	{
		while (ch <= 'z')
		{
			putchar(ch);
			ch = ch + 1;
		}
		putchar(c);
		c++;	
	}
	putchar('\n');
	return (0);
}
