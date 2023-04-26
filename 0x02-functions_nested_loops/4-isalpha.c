#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks if its an alphabet
 * @c: the character
 * Return: 1 for letters and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
