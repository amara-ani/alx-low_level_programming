#include <stdio.h>
/**
 * main - printing alphabets in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);		
		}
		ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
