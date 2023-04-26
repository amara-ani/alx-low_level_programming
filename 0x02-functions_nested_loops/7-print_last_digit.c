#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: character that does the checking
 * Return: it returns the value
 */
int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
