#include "main.h"
/**
 * _isupper - to check if a value is uppercase
 * @c: the checker
 * Return: 1 if its upper case else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
