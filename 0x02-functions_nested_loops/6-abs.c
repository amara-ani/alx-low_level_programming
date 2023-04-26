#include <stdio.h>
#include "main.h"
/**
 * _abs - prints the absolute value of numbers
 * @a: the character that does the checking
 * Return: returns value
 */
int _abs(int a)
{
	int b;

	if (a < 0)
	{
		b = -1 * a;
		return (b);
	}
	else if (a == 0)
	{
		return (0);
	}
	else
	{
		return (a);
	}
}
