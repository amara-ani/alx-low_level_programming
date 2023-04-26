#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _islower - checks if its a lower case or uppercase
 * @c: character to be checked
 * Return: 1 for lowercase and 0 for others
 */
int _islower(int c)
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
