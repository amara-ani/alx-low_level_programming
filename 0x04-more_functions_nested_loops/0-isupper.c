#include "main.h"
/**
 * _isupper - to check if a value is lowercase
 * @c: the checker
 * Return: 1 if its upper case else 0
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
