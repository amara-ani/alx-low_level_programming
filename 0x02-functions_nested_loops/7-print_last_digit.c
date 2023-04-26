#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: character that does the checking
 * Return: it returns the value
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	_putchar(b + '0');
	return b;
}
