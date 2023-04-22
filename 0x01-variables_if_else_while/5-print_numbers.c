#include <stdio.h>
/**
 * main - printing alphabets in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	int ch;

	ch = 0;
	while (ch < 10)
	{
		printf("%d", ch);
		ch = ch + 1;
	}
	printf("\n");
	return (0);
}
