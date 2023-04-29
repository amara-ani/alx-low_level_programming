#include "main.h"
/**
 * _isdigit - checks if a value fall from 0 to 9
 * @c: the checker
 * Returns: 1 if its true else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
