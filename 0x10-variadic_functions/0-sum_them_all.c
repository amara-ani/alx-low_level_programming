#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sums all arguments
 * @n: character
 * Return: 0 (fails) or sum (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(a, n);
	for (i = 0; i < n ; i++)
	{
		sum = sum + va_arg(a, unsigned int);
	}
	va_end(a);
	return (sum);
}
