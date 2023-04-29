#include "main.h"
#include <stdio.h>
/**
 * mul - muliplies two integers
 * @a: checker
 * @b: checker
 * Return: 0 (success)
 */
int mul(int a, int b)
{
	int result, aa, bb;

	result = a *  b;
	if (result <= 9)
	{
		printf("%d", result);
	}
	else
	{
		aa = result / 10;
		bb = result % 10;
		printf("%d", aa);
		printf("%d", bb);
	}
	return (0);
}
